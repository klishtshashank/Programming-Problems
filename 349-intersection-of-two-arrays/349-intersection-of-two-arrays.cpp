class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         
unordered_map<int, int> count;
        int n= nums1.size();
        int m= nums2.size();
    for(int i=0;i<n;i++)
        {
            count[nums1[i]]++;
        }
        vector<int> ans;
  for(int i=0;i<m;i++)
  {  
      if(count[nums2[i]]>0)
      {
          ans.push_back(nums2[i]);
          count[nums2[i]]=0;
      }
  }
      return ans;
    }
};