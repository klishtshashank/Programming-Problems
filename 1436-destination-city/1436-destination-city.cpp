class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> map;
        int n= paths.size();
        for(int i=0;i<n;i++)
        {
            map[paths[i][0]]++;
        }
        string s;
        for(int i=0;i<n;i++)
        {
           if(map[paths[i][1]]==0)
           {
               s= paths[i][1];
               break;
           }
        }
        return s;
    }
};