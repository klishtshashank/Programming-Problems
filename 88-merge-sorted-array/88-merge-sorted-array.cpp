class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i=0,j=0;
        
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                int val= nums1[i++];
                ans.push_back(val);
               
            }
            else{
                 int val= nums2[j++];
                ans.push_back(val);
                
            }
           }
        while(i<m){
             int val= nums1[i++];
                ans.push_back(val);
           
            
        }
        while(j<n){
            int val= nums2[j++];
                ans.push_back(val);
        }
        nums1=ans;
    }
};