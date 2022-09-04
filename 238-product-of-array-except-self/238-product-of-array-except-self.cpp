class Solution {
public:
   /* vector<int> productExceptSelf(vector<int>& nums) {
        long long int product= 1;
        bool x= false;
        int z=0;
       for(auto i:nums)
       {
           if(i!=0) product*= i;
           if(i==0) {x= true;
                     z++;}
       }
        for(int i=0;i<nums.size();i++)
        {
            if(z==nums.size()){
                nums[i]=0;
            }
            else{
            if(!x) nums[i]= product/nums[i];
            else{
                if(nums[i]==0) nums[i]= product;
                else{
                    nums[i]=0;
                }
            }
            }
        }
        return nums;
        */
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), temp = 1;
        vector<int> res(n);
        
        // Put in each index in res the product of all elements before it:
        for (int i=0; i<n; i++) {
            res[i] = temp;
            temp *= nums[i];
        }
        
        // Now multiply each one with all the elements after it:
        temp = 1;
        for (int i=n-1; i>=0; i--) {
            res[i] *= temp;
            temp *= nums[i];
        }
        
        return res;
    }
};