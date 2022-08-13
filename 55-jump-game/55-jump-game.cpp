class Solution {
public:
  /*
  bool f(vector<int> &nums, int i, int n)
    {
        if(i>=n) return false;
        if(i!=n-1 && nums[i]==0) return false;
        if(i==n-1)
        {
            return true;
        }
        bool x= false;
        for(int j=0;j<nums[i];j++)
        {
            x= x|| f(nums, j,n-1);
            if(x) return x;
        }
        return x;
    }
    */
    bool canJump(vector<int>& nums) {
   /*     int n= nums.size();
        
        return f(nums,0,n);
        */
            
        int n=nums.size();
        int reachable=0;
        
        for(int i=0;i<n;i++){
            if(i>reachable) return false;
            reachable=max(reachable,i+nums[i]);
        }
        return true;    

    }
};