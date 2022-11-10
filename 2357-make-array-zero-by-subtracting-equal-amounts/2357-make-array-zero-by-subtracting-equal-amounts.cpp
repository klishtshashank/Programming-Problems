class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0]==0 ? 0:1;
        
        
     //   sort(nums.begin(), nums.end());
        priority_queue<int, vector<int>, greater<int>>pq(nums.begin(), nums.end());
        int ans=0;
        while(!pq.empty())
        {
            if(pq.top()==0) pq.pop();
            else{
                int sz=pq.size();
                vector<int>v;
                int top= pq.top();
                for(int i=0;i<sz;i++)
                {
                    v.push_back(pq.top()-top);
                    pq.pop();
                }
                
                for(int i=0;i<v.size();i++) pq.push(v[i]);
                
                ans++;
            }
        }
        return ans;
    }
};