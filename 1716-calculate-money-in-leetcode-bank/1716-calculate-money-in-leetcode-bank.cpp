class Solution {
public:
    int totalMoney(int n) {
       int k= n/7;
        int z=n/7;
        int rem= n%7;
        int sum=0;
        int i=0;
        while(k--)
        {
            sum+= 28 + i*7;
            i++;
        }
        int j=0;
        while(rem--)
        {
            sum+= z+1 +j;
            j++;
        }
        return sum;
    }
};