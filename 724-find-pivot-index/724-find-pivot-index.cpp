class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0) return 0;
        int k= accumulate(nums.begin(), nums.end(),0);
        int sum=k;
        vector<int> prefix, suff;
        int put=0;
        for(int i=0;i<nums.size();i++)
        {
            suff.push_back(sum);
            sum-= nums[i];
            put+= nums[i];
            prefix.push_back(put);
        }
            for(int i=0;i<nums.size();i++)
            {
                if(prefix[i]==suff[i])
                    return i;
            }
            return -1;
        }
};