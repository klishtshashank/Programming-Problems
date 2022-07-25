class Solution {
    private:
    int first(vector<int>&nums,int n, int target){
        int s=0,e=n-1;
        int ans=-1;
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
        int ans=-1;
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
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> p;
        int n= nums.size();
        int a= first(nums,n, target);
      int b=  last(nums,n, target);
        
        p.push_back(a);
        p.push_back(b);
        
        return p;
      
    }
};