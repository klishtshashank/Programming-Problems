class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
              sort(nums.begin(), nums.end());
        int ans=0;
for(int i=0;i<n/2;i++)
{
    ans += nums[n-i-1]- nums[i];
}
        return ans;
        
        
        
        
        
        
        
        
        
        
        int x;
     // sort(nums.begin(), nums.end());
//         int n=nums.size();
//         int x;
//         sort(nums.begin(), nums.end());
//         if(n%2==0)
//         {
//          x= (nums[n/2]+ nums[(n/2)-1])/2;
//         }
//         else 
//             x= nums[n/2];
        
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             ans= ans+ abs(nums[i]-x);
//         }
        
//         return ans;
    }
};