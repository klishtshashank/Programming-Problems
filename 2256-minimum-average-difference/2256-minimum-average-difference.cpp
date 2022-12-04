class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        // int n= nums.size();
        // vector<int> presum(n);    
        // presum[0]=nums[0];
        // for(int i=1;i<nums.size();i++)
        // {
        //     presum[i]= presum[i-1]+nums[i];
        // }
        // vector<int>post(nums.size());
        // post[n-1]= nums[n-1];
        // for(int i=n-2;i>=0;i--)
        //     post[i]=post[i-1]+nums[i];
          long long totalsum = 0;
        int n = nums.size();

// to store the sum of value upto that point.
        vector<long long>prefix(n);

        for(int i=0;i<n;i++){
            totalsum +=nums[i];
            prefix[i] = totalsum;
        }
// to compare the minimum  values.
        int minval = INT_MAX;
        int ansindex =0;

        for(int i=0;i<n;i++){
            int divpart = i+1;
// calculate first and second part.
            long long firstpart = prefix[i]/divpart;
            long long secondpart=0;

// if n-divpart == 0 ignore it.
            if(n-divpart != 0){secondpart = (totalsum-prefix[i])/(n-divpart);}

// Cal tempcal i.e first-second part.
            long long tempcal =  abs(firstpart-secondpart);
// update value if we got less and store the index value.
            if(tempcal < minval){
                minval = tempcal;
                ansindex = i;
            }

        }
// return the index value.
        return ansindex;      

        
        
    }
};