class Solution {
public:
//   long long pivotIndex(vector<int>& nums) {
       // if(nums.size()==1 && nums[0]==0) return 0;
//        long long k= accumulate(nums.begin(), nums.end(),0);
       //  long long sum=k;
       //  vector<long long> prefix, suff;
       //  long put=0;
       //  for(long long i=0;i<nums.size();i++)
       //  {
       //      suff.push_back(sum);
       //      sum-= nums[i];
       //      put+= nums[i];
       //      prefix.push_back(put);
       //  }
       // long long ans=0;
       //      for(int i=0;i<nums.size()-1;i++)
       //      {
       //          if(prefix[i]>=suff[i+1])
       //             ans++;
       //      }
       //      return (int)ans;
    //   return k;
 //       }
    int waysToSplitArray(vector<int>& nums) {
        
         long long k=0;
        for(int i=0;i<nums.size();i++) k+= nums[i];
        long long sum=k;
        vector<long long> prefix, suff;
        long put=0;
        for(long long i=0;i<nums.size();i++)
        {
            suff.push_back(sum);
            sum-= nums[i];
            put+= nums[i];
            prefix.push_back(put);
        }
       int ans=0;
            for(int i=0;i<nums.size()-1;i++)
            {
                if(prefix[i]>=suff[i+1])
                   ans++;
            }
            return ans;
       //return k;
    }
};