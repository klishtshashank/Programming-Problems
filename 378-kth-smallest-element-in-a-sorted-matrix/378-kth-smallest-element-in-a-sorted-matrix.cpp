class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int c= matrix[0].size();
        int r= matrix.size();
        int arr[c*r];
        for(int i=0;i<(c*r);i++)
        {
            arr[i]= matrix[i/r][i%c];
        }
        sort(arr,arr+c*r);
        return arr[k-1];
        // set<int> a;
        // for(int p=0;p<r*c-1;p++)
        // {
        //     a.insert(arr[p]);
        // }
        
    }
};