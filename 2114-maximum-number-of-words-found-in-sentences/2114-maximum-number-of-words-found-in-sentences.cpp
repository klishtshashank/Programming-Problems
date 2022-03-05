class Solution {
    private:
     /*int k=sentences[i].length();
            counter=1;
            for(int j=0;j<k;j++)
            {
                if(sentences[i][j]==' ')
                {
                    counter++;
                }
            }*/
    
    int wordCount(string s){
        int count=1;
        int x= s.length();
            for(int i=0;i<x;i++){
                if(s[i]==' '){
                    count++;
                }
            }
        return count;
        }
    
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxx=wordCount(sentences[0]);
        for(int i=1;i<n;i++){
             maxx= max(maxx, wordCount(sentences[i]));
            
        }
                           return maxx;
    }
};