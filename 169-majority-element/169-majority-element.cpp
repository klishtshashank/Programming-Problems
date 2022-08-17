class Solution {
public:
    int majorityElement(vector<int>& nums) {
       /*
       sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        */
        int candidate;
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
             if(count==0) candidate= nums[i];
            if(nums[i]==candidate)
            {
                count++;
            }
            else
                count--;
            
           
        }
        return candidate;
    }
};