class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int> map;
        for(int i=0;i<n;i++)
        {
            map[nums[i]]++;
        }
    unordered_map<int, int> :: iterator it= map.begin();
        while(it!= map.end())
        {
            if(it->second>1)
                return true;
            
            it++;
        }
        return false;
    }
};