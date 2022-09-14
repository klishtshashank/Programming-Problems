class Solution {
public:
    int numSub(string s) {
      long long  int k=0;
      long long  int ans=0;
        long long mod= 1e9 + 7;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                k++;
            }
            else{
                if(k==0) continue;
                ans+= ((k*(k+1))/2)%mod;
                k=0;
            }
        }
        if(k>0) ans+= ((k*(k+1))/2)%mod;
        return (int) (ans %mod);
    }
};