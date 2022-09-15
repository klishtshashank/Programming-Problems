class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(changed.size()%2==1 || n==0) return {};
        sort(changed.begin(), changed.end());
        vector<int> ans;
        unordered_map<int, int> map;
        for(int i=0;i<n;i++)            
        {
            map[changed[i]]++;
           // cout<<map[i].first<< " "<<map[i].second<<endl;
        }

        for(int i=0;i<n;i++)
        {
            if(map[changed[i]]==0) continue;
            if(map[2*changed[i]]==0) return {};
            
            map[changed[i]]--;
            map[2*changed[i]]--;
            ans.push_back(changed[i]);
            
        }
      return ans;
    }
};