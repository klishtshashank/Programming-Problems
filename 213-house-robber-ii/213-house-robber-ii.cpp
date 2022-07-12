class Solution {
public:
    int solve(vector<int> &nums)
    {
        int n= nums.size();
       // vector<int>dp(nums.size(),0);
        int prev= nums[0];
        int prev2=0;
        for(int i=1;i<nums.size();i++)
        {
            
            int x= nums[i];
            if(i>1) x+=prev2;
            int y= 0+ prev;
            int curr= max(x,y);
            
           prev2= prev;
            prev= curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1)return nums[0];
        vector<int>temp1, temp2;
        for(int i=0;i<n;i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(solve(temp1), solve(temp2));
    }
};