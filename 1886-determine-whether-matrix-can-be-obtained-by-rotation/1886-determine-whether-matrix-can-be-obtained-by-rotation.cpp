class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n= mat.size();
        int m= mat[0].size();
        vector<bool>ans(4, true);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!= target[i][j]) ans[0]= false;
                if(mat[i][j]!= target[n-j-1][i]) ans[1]= false;
                if(mat[i][j]!= target[n-i-1][n-j-1]) ans[2]= false;
                if(mat[i][j]!= target[j][n-i-1]) ans[3]= false;

			// target[i][j]) c[0]=false;
			// if(mat[i][j]!=target[n-j-1][i]) c[1]=false;
			// if(mat[i][j]!=target[n-i-1][n-j-1]) c[2]=false;
			// if(mat[i][j]!=target[j][n-i-1]) c[3]=fal
            }
        }
        return ans[0] || ans[1]|| ans[2]|| ans[3];
    }
};