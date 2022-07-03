class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sorted;
        int n1= nums1.size();
        int n2= nums2.size();
        
        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]>nums2[j])
            {
                sorted.push_back(nums2[j++]);
            }
            else{
                sorted.push_back(nums1[i++]);
            }
        }
        while(i<n1)
        {
              sorted.push_back(nums1[i++]);
        }
         while(j<n2)
        {
              sorted.push_back(nums2[j++]);
        }
        int k= sorted.size();
        double d;
        if(k%2!=0)
        {
        d= 1.00*sorted[k/2];
        }
        else{
            d= (sorted[(k/2)-1]+sorted[k/2])/2.00;
        }
        return d;
    }
};