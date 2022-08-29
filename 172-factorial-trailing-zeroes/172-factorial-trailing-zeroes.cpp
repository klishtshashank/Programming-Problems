class Solution {
public:
    int trailingZeroes(int n) {
    /*    int ans=0;
        while(n>0)
        {
            ans+= n/5;
            n/=5;
        }
        return ans;
        */
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(i%5==0)
            {
                int z=i;
                while(z%5==0)
                z= z/5, ans++;
            }
        }
        return ans;
    }
};