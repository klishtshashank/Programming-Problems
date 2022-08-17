class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n, vector<int>(n,-1));
        int left=0, right=n-1, up=0, down=n-1;
        int x= n*n;
        int z=1;
        while(left <=right && up<=down)
        {
            for(int i=left;i<=right;i++)
            {
                mat[up][i]=z;
                z++;
            }
            up++;
            for(int j=up;j<=down;j++)
            {
                mat[j][right]=z;
                z++;
            }
            right--;
            for(int i=right;i>=left;i--)
            {
                mat[down][i]=z;
                z++;
            }
            down--;
            for(int j=down;j>=up;j--)
            {
                mat[j][left]=z;
                z++;
            }
            left++;
            
        }
        return mat;
    }
};