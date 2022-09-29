class Solution {
public:
    //typedef pair<int, int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         int n = size(arr), R = lower_bound(begin(arr), end(arr), x) - begin(arr), L = R - 1;
		// expand the [L, R] window till its size becomes equal to k
        while(k--) 
            if(R >= n || L >= 0 && x - arr[L] <= arr[R] - x) L--;  // expand from left
            else R++;                                              // expand from right
        return vector<int>(begin(arr) + L + 1, begin(arr) + R);
        
//         if(k>arr.size()) return {};
        
//         int mini= 1e9;
//         int ind=0;
//         for(int i=0;i<arr.size();i++)
//         {
//            if(abs(arr[i]-x) < mini)
//            {
//                mini= abs(arr[i]-x);
//                ind= i;
//             }
//         }
//         vector<int>ans;
//         priority_queue<pi, vector<pi> , greater<pi>>pq;
//         int z= arr[ind];
//         for(int i=0;i<arr.size();i++)
//         {
//             pq.push({abs(arr[i]-z), arr[i]});
//         }
            
//         while(k--)
//         {
//             ans.push_back(pq.top().second);
//            pq.pop();
//         }
//         sort(ans.begin(), ans.end());
//         return ans;
    }
};