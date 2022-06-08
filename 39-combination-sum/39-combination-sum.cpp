class Solution {
    
    void helper( int index, vector<int>& candidates, int target,  vector<int> &sans, vector<vector<int>>& ans)
    {
        if(index== candidates.size())
        {
            if(target==0)
            {
                ans.push_back(sans);
            }
            return;
        }
        
        if(candidates[index]<= target)
        {
            sans.push_back(candidates[index]);
            helper(index, candidates, target- candidates[index],sans, ans );
            sans.pop_back();
        }
        
helper(index+1, candidates, target,sans, ans );
   
        
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sans;
        helper(0, candidates, target, sans,ans);
        return ans;
    }
};