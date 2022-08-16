class Solution {
public:
    char repeatedCharacter(string s) {
          int n= s.size();
        unordered_map<char, int> map;
                char ch;

        for(int i=0;i<n;i++)
        {
            map[s[i]]++;
            if(map[s[i]]==2){
                ch= s[i];
                break;
            }
        }
       
        return ch;
    }
};