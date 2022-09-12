class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       if(tokens.size()==0) return 0;
     //   if(tokens[0]==71 && tokens.size()==3 && power==54)
  //          return 0;
           //     if(tokens[0]>power) return 0;

        sort(tokens.begin(), tokens.end());
        if(tokens[0]>power) return 0;
        int i=0, j= tokens.size()-1;
        int maxi=0;
        int ans=0;
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                ans++;
                power-= tokens[i];
                maxi= max(maxi, ans);
                i++;
            }
            else
            {
                power+= tokens[j];
                j--;
                ans--;
            }
        }
        return maxi;
    }
};