class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int>map;
        for(int i=0;i<stones.size();i++)
            map[stones[i]]++;
        int ans=0;
        
        for(int i=0;i<jewels.size();i++)
        {
            ans+= map[jewels[i]];
        }
        return ans;
    }
};