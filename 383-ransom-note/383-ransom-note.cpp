class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        
       for(int i=0;i<ransomNote.size();i++)
       {
           m1[ransomNote[i]]++;
       }
        for(int j=0;j<magazine.size();j++)
        {
            m2[magazine[j]]++;
        }
        
    for(int i=0;i<ransomNote.size();i++)
    {
        if(m1[ransomNote[i]]>m2[ransomNote[i]])
            return false;
    }
        
        return true;
    }
};