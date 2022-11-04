class Solution {
    bool isVowel(char ch){
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
            
        }
        else 
            return false;
    }
    
    
public:
    string reverseVowels(string s) {
         int k= s.size();
        int i=0,j=k-1;
        while(i<=j){
            if(isVowel(s[i])&& isVowel(s[j]))
            {
                swap(s[i++], s[j--]);
            }
            else if(isVowel(s[i]) && !isVowel(s[j]))
            {
                j--;
            }
            else if(!isVowel(s[i]) && isVowel(s[j]))
            {
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};