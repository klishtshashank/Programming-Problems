class Solution {
public:
    int longestPalindrome(vector<string>& words) {
//         unordered_map<string, int> m;
//         int ans=0;
//         bool check = false;
//         for(int i=0;i<words.size();i++)
//         {
//             m[words[i]]++;
//         }
//         if(m.size()==1 && words[0][0]==words[0][1])
//         {
//             return words.size()*2;
//         }

//         for(int i=0;i<words.size();i++)
//         {
//             if(words[i][0]== words[i][1])
//             {
//                 if(check)
//                 {
//                     continue;
//                 }
//                 ans++;
//                 check= true;
//                 continue;
//             }
//             string find= "";
//             find+= words[i][1];
//             find+= words[i][0];
//             if(m[find]>0)
//             {
//                 ans+=2;
                
//                 m[words[i]]--;
//                 m[find]--;
//             }
            
            
//         }
//      return 2*ans;
        map<string,int> mp;
for(int i=0;i<words.size();i++)
mp[words[i]]++;

    int ans=0,m=0;
    bool flag=false;
    for(auto x: mp)
    {
        string s=x.first;
        string t=s;
        reverse(s.begin(),s.end());
        if(s==t)
        {
            ans+=x.second/2;
            if(x.second%2) 
                flag=true;
        }
        else
        {
            if(mp.count(s))
                ans+=min(x.second,mp[s]),mp.erase(s);
        }
    }
    ans=ans*4;
    if(flag) 
        ans+=2;
    return ans;
    }
};