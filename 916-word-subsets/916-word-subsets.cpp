class Solution {
public:
     vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> v(26, 0);
        for(string w: words2) {
            vector<int> temp(26, 0);
            for(char c: w) temp[c-'a']++;
            for(int k=0; k<26; ++k) v[k] = max(v[k], temp[k]);
        }
        for(string w: words1) {
            vector<int> temp(26, 0);
            for(char c: w) temp[c-'a']++;
            int k = 0;
            for(; k<26; ++k) if(temp[k]<v[k]) break;
            if(k==26) ans.push_back(w);
        }
     return ans;
    }
//     vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
// //         unordered_map<char,int>ini;
// //         for(int q=0;q<words2.size();q++)
// //         {
// //             ini[words2[q]]++;
// //         }
// //         vector<string> ans;
// //         for(int i=0;i<words1.size();i++)
// //         {
// //             string s= words1[i];
            
// //             unordered_map<char, int> map;
// //             for(int j=0;j<s.size();j++)
// //             {
// //                 map[s[i]]++;
// //             }
// //             int c=0;
// //           for(int k=0;k<words2.size();k++)
// //           {
// //               if(map[words2[k]] >= ini[words2[k]])
// //               {
// //                   c++;
// //               }
// //           }
// //         if(c==words2.size())
// //             ans.push_back(s);
            
// //         }
// //         return ans;
        
//     }
};