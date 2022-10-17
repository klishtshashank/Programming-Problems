class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.size()<26) return false;
        unordered_map<int, int> m;
        for(int i=0;i<s.size();i++)
        {
        m[s[i]-'a']++;    
        }
          for(int i=0;i<26;i++)
          {
              if(m[i]==0) return false;
          }
        return true;
    }
};