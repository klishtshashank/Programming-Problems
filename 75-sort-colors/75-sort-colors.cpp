class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int l=0, mid=0;
        int end=nums.size()-1;
        
        
        while(mid<=end)
        {
           int k= nums[mid];
            if(k==0) swap(nums[l++], nums[mid++]);
       else if(k==1) mid++;
        else swap(nums[mid], nums[end--]);
            
            
//             int low = 0, mid = 0, high = nums.size() - 1;
//         while(mid <= high)
//         {
//             switch(nums[mid])
//             {
//                 case 0: swap(nums[low++], nums[mid++]); break;
                
//                 case 1: mid++; break;
                
//                 case 2: swap(nums[mid], nums[high--]); break;
//             }
//         }
            
        }
    }
};