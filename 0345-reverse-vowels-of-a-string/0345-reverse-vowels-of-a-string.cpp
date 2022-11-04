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
         int n= s.size(); //size of word
    int start =0, end=n-1; //two pointer one is at start and other at end
        
        while(start<=end){
            if(isVowel(s[start])&& isVowel(s[end])) //if both are vowels
            {
                swap(s[start++], s[end--]); // swap them
            }
            else if(isVowel(s[start]) && !isVowel(s[end])) //start is vowel, end is not
            {
                end--;
            }
            else if(!isVowel(s[start]) && isVowel(s[end])) //similar as above
            {
                start++;
            }
            else{ // agar dono me se koi v vowel nhi hua to, 
                //start aur end dono ko shift kr denge
                start++;
                end--;
            }
        }
        return s;
    }
};