class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int i=0, j=n, c=0;
        
            while(i<n)
            {
                ans[c]= nums[i++];
                c++;
                ans[c]= nums[j++];
                c++;
            }
        return ans;
    }
};