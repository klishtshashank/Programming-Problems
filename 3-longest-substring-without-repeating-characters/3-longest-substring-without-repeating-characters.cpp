class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0, n= s.size(), len=0,  maxi=0;
        
        unordered_map<char, int> map;
        while(j<n)
        {
            char ch=s[j];
            //maan lete hain hai  substring me
            while(map.count(ch) && map[ch]>=i){
                 // i abhi peeche hai usko aage le aayenge
                i= map[ch] +1;
                len= j-i;
            }
            
            //agar nhi hai
            map[ch]=j;
                len++;
                j++;
            
            maxi= max(maxi, len);
        }
        return maxi;
    }
};