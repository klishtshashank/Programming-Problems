class Solution {
    private:
        int divide(int n, int num)
        {
            while(n%num==0)
            {
                n=n/num;
            }
            return n;
        }
public:
    bool isUgly(int n) {
        if(n==0) return false;
        if(n==1) return true;
        n=divide(n,2);
        n= divide(n,3);
        n= divide(n,5);
        
        return n==1;
    }
};