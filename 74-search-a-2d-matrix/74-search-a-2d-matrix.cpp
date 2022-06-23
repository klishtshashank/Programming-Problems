class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int c= matrix[0].size();
        int n= m*c;
        
        int s=0;
        int e= n-1;
        int mid= s+ (e-s)/2;
        
        while(s<=e)
        {
            int element= matrix[mid/c][mid%c];
            
            if(element== target)
            {
                return true;
            }
            else if(element> target)
            {
                e= mid-1;
            }
            else
                s= mid+1;
            
            mid= s+ (e-s)/2;
        }
        return false;
    }
};