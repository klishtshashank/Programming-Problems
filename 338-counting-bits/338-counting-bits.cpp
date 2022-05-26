class Solution {
     int no1(int n) {
        int c=0;
        while(n>0)
        {
            if(n&1)
                c++;
            n= n>>1;
        }
        return c;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int i=0;i<=n;i++)
        {
            ans.push_back(no1(i));
        }
        return ans;
    }
};