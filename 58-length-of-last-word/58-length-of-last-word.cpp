class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int ans=0;
        int start=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
               continue;
            
            else
            {
                start= i;
                break;
            }
        }
          for(int i=start;i<s.size();i++)
        {
            if(s[i]==' ')
               break;
            
            else
            {
                ans++;
            }
        }
        return ans;
    }
};