class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> map, map1;
      
vector<int> ans1, ans2;
        for(int i=0;i<matches.size();i++)
        {
            map[matches[i][1]]++;
        }
        for(auto i:map)
        {
            if(i.second==1)
            {
                ans1.push_back(i.first);
            }
        }
       for(int i=0;i<matches.size();i++)
       {
         if(map[matches[i][0]]==0 )
         {
            
                  ans2.push_back(matches[i][0]);
             map[matches[i][0]]=1;
         }
       }
        sort(ans1.begin(), ans1.end());
                sort(ans2.begin(), ans2.end());

                  return {ans2, ans1};
    }
};