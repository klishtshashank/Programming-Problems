class Solution {
public:
    bool p(string s)
    {
        int n= s.size()-1;
        int i=0;
        while(i<n)
        {
            if(s[i++]!=s[n--]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(p(words[i])) return words[i];
        }
        return "";
    }
};