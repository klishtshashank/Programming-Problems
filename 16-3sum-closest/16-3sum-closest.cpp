class Solution {
   
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        int diff=1e9;
        sort(nums.begin(), nums.end());
   //     int j=1, k=n-1;
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            int j= i+1;
            int k=n-1;
            while(j<k)
            {
                int sum= nums[j]+ nums[k]+ nums[i];
                if(abs(sum-target)<diff)
                {
                    diff=  abs(sum-target);
                    ans= sum;
                }
                if(sum>target)
                {
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};