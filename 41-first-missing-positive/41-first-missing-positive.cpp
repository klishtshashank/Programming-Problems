class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int z;
         unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int x= nums[nums.size()-1];
        for(int i=1;i<=nums.size();i++)
        {
            if(map[i]==0) 
            {
               return i;
            }
        }
        return nums.size()+1;
    }
};