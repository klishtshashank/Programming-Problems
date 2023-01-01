class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>m;
        int l= s.size();
        int word_count=0;
        int count=0;
        for(int i=0;i<pattern.size();i++)
        {
            string t="";
            while(count<l && s[count]!=' ')
            {
                t+= s[count];
                count++;
            }
            word_count++;
            count++;
            if(m[pattern[i]]!="")
            {
                if(m[pattern[i]]!=t)
                    return false;
            }
            else{
                for(auto k:m)
                {
                    if(k.second==t) return false;
                }
                m[pattern[i]]=t;
            }
                
        }
    if(count<l) return false;

        return true;
    }
};