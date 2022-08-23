class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> map(26,0);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]-'a']++;
            map[t[i]-'a']--;
        }
     for (int i=0; i<26; ++i)
      ans += (map[i] > 0)?map[i]:0;
    return ans;
    }
};