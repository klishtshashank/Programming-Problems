class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int j= height.size()-1;
        int i=0;
        while(i<j)
        {
            int area= min(height[i], height[j]) * (j-i);
            maxArea= max(maxArea, area);
          if(height[i]>height[j])
            j--;
            else if(height[i]<height[j])
                i++;
            else{
                i++;
                j--;
            }
            
        }
        return maxArea;
    }
};