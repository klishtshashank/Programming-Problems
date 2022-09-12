class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        
        sort(strs.begin(), strs.end());
        
        string i= strs[0], j= strs[strs.size()-1];
        int z= min(i.size(), j.size());
        string ans="";
        for(int k=0;k<z;k++)
        {
            if(i[k]==j[k]) ans+= i[k];
            else
                break;
        }
        return ans;
    }
};