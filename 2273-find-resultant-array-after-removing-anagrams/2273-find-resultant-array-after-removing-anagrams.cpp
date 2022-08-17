class Solution {
public:
     bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        
        vector<int>ans(26,0);
        
        for(int i=0;i<s.size();i++)
        {
            ans[s[i]-'a']++;
            ans[t[i]-'a']--;
            
        }
        for(int i=0;i<26;i++)
        {
            if(ans[i]!=0)
                return false;
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
       int n=words.size();
        for(int i=0;i<words.size()-1;i++)
        {
            if(isAnagram(words[i], words[i+1]))
            {
                words.erase(words.begin()+ i+1);
                i--;
            }
        }
        return  words;
    }
};