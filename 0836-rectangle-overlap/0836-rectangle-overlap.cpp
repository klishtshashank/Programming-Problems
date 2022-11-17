class Solution {
public:

    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        int comarea = 0;
        
        int left = max(a[0], b[0]);
        int right = min(a[2], b[2]);
        int top = min(a[3], b[3]);
        int bottom = max(a[1], b[1]);
        
        if(left < right && top > bottom)
            return 1;
            
        return 0;
    }
};