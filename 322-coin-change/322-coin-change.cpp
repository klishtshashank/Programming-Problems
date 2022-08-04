class Solution {
public:
    int rec(int ind, int amount, vector<int>&coins, vector<vector<int>> &dp )
    {
        if(ind==0)
        {
            return amount% coins[0]==0 ? amount/coins[0] : 1e9;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int notake= rec(ind-1, amount, coins,dp);
        int take= 1e9;
        if(coins[ind]<=amount) take= 1+ rec(ind, amount- coins[ind], coins,dp);
        
        
        return dp[ind][amount]= min(take, notake);
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
       vector<vector<int>> dp(n, vector<int> (amount+1, -1));
      
      //  vector<vector<int>> dp(n, vector<int> (amount+1, 0));
        
        
        int z= rec(n-1, amount, coins,dp);
        return z==1e9 ? -1: z;
    }
};