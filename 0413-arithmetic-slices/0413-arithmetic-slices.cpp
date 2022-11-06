class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int dp[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            dp[i]=0;
        }
        
        int ans=0;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            {
                dp[i]= 1+ dp[i-1];
                ans+= dp[i];
            }
        }
        return ans;
    }
};