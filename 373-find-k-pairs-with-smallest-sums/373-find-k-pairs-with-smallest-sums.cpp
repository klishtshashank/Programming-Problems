class Solution {
public:
//    typedef pair<int, pair<int, int>> pii;
    
  
  //      priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
 /*       priority_queue <pii, vector<pii>, greater<pii>>pq ;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                pair p= make_pair(nums1[i], nums2[j]);
                pq.push({nums1[i]+ nums2[j],p});
            }
        }
        vector<vector<int>>ans;
        while(k-- && !pq.empty())
        {
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return ans;
        */
                vector<vector<int>>ans;
    priority_queue<pair<int, pair<int, int>>> pq;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int sum= nums1[i] + nums2[j];
                
                if(pq.size()<k)
                {
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else if(sum<pq.top().first)
                {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else
                    break;
            }
        }
        while(!pq.empty())
        {
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};