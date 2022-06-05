class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i=0;
        int j=0;
        int k=0;
        int n= word1.size();
        int m= word2.size();
        
        
        while(i<n && j<m)
        {
             s= s+ word1[i++];
             s= s+ word2[j++];
        }
        while(i<n)
        {
            s= s+ word1[i++];
        }
        while(j<m)
        {
           s= s+ word2[j++];
        }
        
        return s;
    }
};