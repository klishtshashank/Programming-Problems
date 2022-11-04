class Solution {
 private:
    bool isVowel(char ch){
        return  (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')||
                (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
        }
    
public:
    string reverseVowels(string s) {
         int n= s.size(); //size of word
    int start =0; //ek pointer start me 
    int end=n-1; //aur ek end me le lete hain initially
        
        while(start<=end){
            if(isVowel(s[start])&& isVowel(s[end])) //if both are vowels
            {
                swap(s[start++], s[end--]); // swap them
            }
            else if(isVowel(s[start]) && !isVowel(s[end]))
            {  
                //start jisko point kar rha wo vowel hai aur end wala nhi
                // tab end wala ko ek step peeche laate hain, qki hmko
                //end wala side v ek vowel chahiye taaki swap kr sake SO
                end--;
            }
            else if(!isVowel(s[start]) && isVowel(s[end])) 
            { //similar as above bas ye start side wala case hai
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