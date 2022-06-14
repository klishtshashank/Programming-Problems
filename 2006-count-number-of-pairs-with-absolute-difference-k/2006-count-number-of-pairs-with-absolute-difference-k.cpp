class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            count+= m[nums[i]-k]+ m[nums[i]+k];
            m[nums[i]]++;
        }
        if(k==0)
        return count/2;
        else
            return count;
    }
};