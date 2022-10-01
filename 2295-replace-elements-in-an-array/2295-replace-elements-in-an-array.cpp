class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
       unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++)
        {
          m[nums[i]]=i;
        }
        for(int i=0;i<op.size();i++)
        {
            int x= op[i][0];
            int y= op[i][1];
            
           nums[m[x]]= y; // m[x]index dega, wha change kr diye
            
            m[y]= m[x];  // index assign kr diye naye wale ko
            
             
        }
        return nums;
    }
};