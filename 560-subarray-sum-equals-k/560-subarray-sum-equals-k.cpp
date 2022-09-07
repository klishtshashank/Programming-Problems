class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>map;
        map.insert({0,1});
        int presum=0;
        for(int i=0;i<nums.size();i++)
        {
            presum+= nums[i];
            int rsum= presum-k;
            if(map[rsum]>0)
            {
                ans+= map[rsum];
            }
            map[presum]++;
        }
        return ans;
    }
};