class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
         int n= nums.size();
        // return (nums[n-1]-1)*(nums[n-2]-1);
        
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        int a= pq.top();
        pq.pop();
        int b= pq.top();
        
        return (a-1)*(b-1);
    }
};