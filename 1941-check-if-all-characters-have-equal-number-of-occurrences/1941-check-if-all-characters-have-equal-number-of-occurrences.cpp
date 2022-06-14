class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int x=m[s[0]];
        unordered_map<char, int> :: iterator it= m.begin();
        while(it!=m.end())
              {
            if(it->second!=x)
                return false;
            
            it++;
        }
        return true;
    }
};