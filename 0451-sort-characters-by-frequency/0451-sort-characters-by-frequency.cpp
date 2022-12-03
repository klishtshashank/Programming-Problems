class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
      for(auto z:s)
      {
          map[z]++;
      }
        priority_queue<pair<int, char>>pq;
        
        for(auto it: map)
        {
            pq.push(make_pair(it.second, it.first));
        }
        string ans;
        while(!pq.empty())
        {
           
            int x=pq.top().first;
            char c= pq.top().second;
            while(x--)
            {
            ans+=c;
            }
            pq.pop();
        }
        return ans;
    }
};
 // string frequencySort(string s) {
 //        unordered_map<char,int> m;
 //        for(auto x:s)
 //        {
 //            m[x]++;
 //        }
 //        string ans;
 //        priority_queue<pair<int,char>> pq;
 //        for(auto x:m)
 //        {
 //            pq.push(make_pair(x.second,x.first));
 //        }
 //        while(!pq.empty())
 //        {
 //            char ch=pq.top().second;
 //            int ct=pq.top().first;
 //            while(ct--)
 //                ans+=ch;
 //            pq.pop();
 //        }
 //        return ans