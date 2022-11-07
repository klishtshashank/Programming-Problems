class Solution {
public:
    int balancedStringSplit(string s) {
        unordered_map<char, int> m;
        int ans=0;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            
            if(m['L']==m['R'])
            {
                ans++;
                m['L']=0;
                m['R']=0;
            }
        }
        return ans;
    }
};