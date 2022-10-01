class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
        {
            if(m[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};