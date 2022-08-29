class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi= 0,curr=0;
        for(int i=0;i<gain.size();i++)
        {
            curr= curr+ gain[i];
            maxi= max(maxi, curr);
        }
        return maxi;
    }
};