class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     /* int left = 0;
        int right = matrix[0].size()-1;
        int top = 0;
        int bottom = matrix.size()-1;
        vector<int> res;
        int i;
        while(left <= right and top <= bottom) {
            // traverse from left to right in the top row
            for(i = left; i <= right; i++) {
                res.push_back(matrix[top][i]);
            }
            // now that top row is done,decrement the top pointer
            top++;
            // traverse from top to bottom in the rightmost column
            for(i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;
            if(left > right || top > bottom) break;
            // traverse from right to left in the bottom row
            for(i = right; i >= left; i--) {
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            // // traverse from bottom to top in the left most column
            for(i=bottom; i >= top; i--) {
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        
        return res;   
        */
        vector<int> ans;
        int n= matrix.size();
        int m= matrix[0].size();
        
         //vector<vector<int>>mat(n, vector<int>(n,-1));
        int left=0, right=m-1, up=0, down=n-1;
      //  int x= n*n;
      //  int z=1;
        while(left <=right && up<=down)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[up][i]);
                
            }
            up++;
            for(int j=up;j<=down;j++)
            {
                ans.push_back(matrix[j][right]);
               // z++;
            }
            right--;
                        if(left > right || up > down) break;

            for(int i=right;i>=left;i--)
            {
                ans.push_back(matrix[down][i]);
            //    z++;
            }
            down--;
            for(int j=down;j>=up;j--)
            {
                ans.push_back(matrix[j][left]);
                //z++;
            }
            left++;
            
        }
        return ans;
    }
};