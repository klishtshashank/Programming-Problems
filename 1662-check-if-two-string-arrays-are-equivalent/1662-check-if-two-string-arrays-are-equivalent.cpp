class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //I WAS ASSUMING SIZE OF WORD 1 AND WORD 2 AND 
        //GETTING WRONG ANSWERS, 
        int n= word1.size();
        int m= word2.size();
        string w1= word1[0];
        string w2= word2[0];
       
       for(int i=1;i<n;i++)
        {
            w1.append(word1[i]);
           
        }
         
       for(int i=1;i<m;i++)
        {
            w2.append(word2[i]);
           
        }
         
        if(w1==w2)
            return true;
        else
            return false;
            
       
    }
};