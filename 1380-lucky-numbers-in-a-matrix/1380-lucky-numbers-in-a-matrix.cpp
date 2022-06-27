class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row= matrix.size();
        int col= matrix[0].size();
        vector<int> maxii;
        vector<int>minii;
        for(int i=0;i<row;i++)
        {
            int mini= INT_MAX;
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]<mini)
                {
                    mini= min(mini,matrix[i][j] );
                }
            }
            minii.push_back(mini);
        }
        
         for(int j=0;j<col;j++)
        {
            int maxi= 0;
            for(int i=0;i<row;i++)
            {
                if(matrix[i][j]>maxi)
                {
                    maxi= max(maxi,matrix[i][j] );
                }
            }
            maxii.push_back(maxi);
        }
        vector<int> res;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
        if(minii[i]==matrix[i][j] && maxii[j]==matrix[i][j])
                    res.push_back(matrix[i][j]);
            }
        }
        return res ;
        
        
    }
};