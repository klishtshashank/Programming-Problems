class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string> ref= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        //cout<< ref[0]<<endl;
        set<string> ans;
        for(int i=0;i<words.size();i++)
        {
            string j="";
            for(int k=0;k<words[i].size();k++)
            {
               j+= ref[words[i][k]-97];
            }
            ans.insert(j);
        }
        return ans.size();
    }
};