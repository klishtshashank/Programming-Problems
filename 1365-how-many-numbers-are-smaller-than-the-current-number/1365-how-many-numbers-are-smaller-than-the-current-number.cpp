class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp;
        temp= nums;
        unordered_map<int, int> map;
        int n= temp.size();
        sort(temp.begin(), temp.end());
        for(int i= n-1;i>=0;i--)
        {
            map[temp[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]= map[nums[i]];
        }
        return nums;
    }
};
//BRUTE FORCE APPROACH
/*
 vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
           
            int  cnt=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                    cnt++;
            }
            ans.push_back(cnt);
            
        }
    
        return ans;   
*/