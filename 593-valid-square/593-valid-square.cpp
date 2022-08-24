class Solution {
public:
//     double dist(vector<int>& p1, vector<int>& p2) {
//         return sqrt((p2[0] - p1[0]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p2[1] - p1[1]));
//     }
//     bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
//         unordered_map<double, int> map;
        
//         double p1p2= dist(p1,p2);
//         cout<<p1p2<<endl;
//         map[p1p2]++;
//         double p1p3= dist(p1,p3); map[p1p3]++;
//         double p1p4 =dist(p1,p2); map[p1p4]++;
//         double p2p3= dist(p3,p2); map[p2p3]++;
//         double p2p4= dist(p4,p2); map[p2p4]++;
//         double p3p4= dist(p3,p4); map[p3p4]++;
//          set<int> s;
//      for(auto it:map)
//      {
//          s.insert(it.second);
//      }
        
//         return s.size()==2;
        
//     }
    private:
    double dist(vector<int>& p1, vector<int>& p2) {
        return sqrt((p2[0] - p1[0]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p2[1] - p1[1]));
    }
    
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points = {p1, p2, p3, p4};
        set <double> lengths;
        
        for (int i=0; i<4; i++) 
            for (int j=i+1; j<4; j++) {
                double curr = dist(points[i], points[j]);
                if (curr != 0)
                    lengths.insert(curr);
                else
                    return false;
            }
        
    
        return lengths.size() == 2;
    }
};