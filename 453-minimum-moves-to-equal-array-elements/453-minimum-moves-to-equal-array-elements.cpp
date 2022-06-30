class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n= nums.size();
        int mini= INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            mini=min( mini, nums[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            ans+= abs(nums[i]- mini);
            
        }
        return ans;
    }
};