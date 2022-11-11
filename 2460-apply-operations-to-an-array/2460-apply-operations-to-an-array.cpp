class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();

        vector<int>ans;
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=2*nums[i];
                
                nums[i+1]=0;
            }
        }
        
        int cntt=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) {
                cntt++;
            }
            else {
                ans.push_back(nums[i]);
            }
        }
        while(cntt--)
        {
            
            ans.push_back(0);
        }
        return ans;
    }
};