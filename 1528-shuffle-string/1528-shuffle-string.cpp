class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n= s.length();
        char ar[n];
        string p="";
        for(int i=0;i<n;i++ )
        {
            ar[indices[i]]= s[i];
            
        }
        for(int i=0;i<n;i++ )
        {
          p.push_back(ar[i]);
            
        }
        return p;
        
    }
};