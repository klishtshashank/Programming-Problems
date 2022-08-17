class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==1) return {{strs[0]}};
        
         unordered_map<string, vector<string>>map;
        
        for(int i=0;i<strs.size();i++)
        {
            string s= strs[i];
            sort(strs[i].begin(),strs[i].end());
            map[strs[i]].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto i=map.begin(); i!=map.end();i++ )
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};