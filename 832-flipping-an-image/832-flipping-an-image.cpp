class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n= image.size();
        for(int i=0;i<n;i++)
        {
            int p=0,q= n-1;
          while(p<=q)
          {
              swap(image[i][p++], image[i][q--]);
          }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(image[i][j]==0)
                    image[i][j]=1;
                else
                    image[i][j]=0;
            }
        }
        return image;
    }
};