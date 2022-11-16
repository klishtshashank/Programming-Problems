class Solution {
public:
    int arrangeCoins(int n) {
        
       long ans = 0, sum = 0;
        while (sum <= n) sum += ++ans;
        return ans-1;
    }
};