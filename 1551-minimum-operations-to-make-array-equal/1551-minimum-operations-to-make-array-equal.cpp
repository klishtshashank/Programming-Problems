class Solution {
public:
    int minOperations(int n) {
        int sum=0;
        if(n%2==0)
        {
           return pow(n/2,2);
        }
        else{
         while(n>0)
         {
             sum += (n-1);
             n -=2;
         }
        }
        return sum;
    }
};