class Solution {
public:
    bool checkRecord(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L'){ 
                cnt++; 
                if(cnt>=3) 
                    return false;
            }
            else{
                cnt=0;
            }
        }
        unordered_map<char, int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            char ch='A';
            if(m[ch]>1) return false;
        }
        
        return true;
    }
};