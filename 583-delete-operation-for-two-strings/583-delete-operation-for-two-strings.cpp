class Solution {
public:
 /*   int minD(string &word1, string &word2)
    {
         if(word1.size()==0)
            return word2.size();
        
        if(word2.size()==0)
            return word1.size();
        
      if(word1[0]==word2[0]){
        
          return minD(word1, word2);
      }
        
     int x= minD(word1.erase(0,1), word2);
        int y= minD(word1, word2.erase(0,1));
        
        return min(x,y);
    }
    */
    int minDistance(string word1, string word2) {
     //  return minD(word1,  word2);
    vector<vector<int> >dp(size(word1) + 1, vector<int>(size(word2) + 1));
	for(int i = 0; i <= size(word1); i++) 
		for(int j = 0; j <= size(word2); j++) 
			if(!i || !j) dp[i][j] = i + j; // if one word == "", all other characters of other word need to be deleted
			//                if characters match        ?  dont delete     : 1 deletion + min to equalize after deletion of (word1[i], word2[j])
			else dp[i][j] = word1[i - 1] == word2[j - 1] ? dp[i - 1][j - 1] : 1 + min(dp[i - 1][j], dp[i][j - 1]);
	return dp[size(word1)][size(word2)];
    }
};