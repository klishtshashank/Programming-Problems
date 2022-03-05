class Solution {
  /*  private:
     int first(vector<int>&nums,int n, int target){
        int s=0,e=n-1;
       int ans=0;
        int mid=s+ (e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                ans= mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
           else {
                s=mid+1;
            }
            mid=s+ (e-s)/2;
        }
    return ans;
            }
    
    int last(vector<int> &nums,int n, int target){
        int s=0,e=n-1;
        int ans=0;
        int mid=s+ (e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                ans= mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
           else{
                s=mid+1;
            }
            mid=s+ (e-s)/2;
        }
    return ans;
            }
             int a= first(nums, p, target);
         int b= last(nums, p, target);
        if(a==0 && b==0 )
            return res;
        for(int i=a;i<=b;i++){
            res.push_back(i);
        }
        
        return res;
    */
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int p= nums.size();
        for(int i=0;i<p;i++)
        {
            if(nums[i]==target)
                res.push_back(i);
        }
       return res;
    }
};