class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int n= nums.size();
        if(n==0 || n==1) return 0;
        int digit_sum=0, sum=0;
        for(int  i=0;i<n;i++)
        {
            sum+= nums[i];
            int k= nums[i];
            while(k)
            {
                digit_sum+= k%10;
                k=k/10;                
            }
            
        }
        return abs(digit_sum - sum);
    }
};