class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows); // numRows size ke rows ka ek vector 
        // bana liya
        // ab i=0 se chalte hain
        for(int i=0;i<numRows;i++)
        {
            // ab nya vector bna dete hain 
           ans[i]= vector<int>(i+1, 1); //i+1 size ka hoga, 1 se initialize kr diya
            // ab ek aur loop lenge jisme value bharna h
            for(int j=1;j<i;j++)
            {
                ans[i][j]= ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
        //  vector<vector<int>> ans(numRows);             // initialize n rows
        // for(int i = 0; i < numRows; i++) {
        //     ans[i] = vector<int>(i+1,1);        // ith row(0-indexed) has i+1 elements
        //     for(int j = 1; j < i; j++)          // 1st and last elements will be 1, rest will be sum of two elements from above row
        //         ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];            
        // }
        // return ans;
    }
};