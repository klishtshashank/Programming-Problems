class Solution {
public:
    int countHomogenous(string s) {
        long long ans=0;
        long long mod= 1e9+7;
      long long  int k=0;
        char ch=s[0];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch)
            {
                k++;
            }
            else{
                ans+= ((k* (k+1))/2)%mod;
                ch= s[i];
                k=1;
            }
        }
       ans+= ((k* (k+1))/2)%mod;
        return (int)(ans%mod);
    }
};