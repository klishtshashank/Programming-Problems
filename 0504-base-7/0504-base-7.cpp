class Solution {
public:
    string convertToBase7(int num) {
        int ans=0;
        int c=1;
        while(num)
        {
            ans+= (num%7)*c;
            num/=7;
            c*=10;
            
        }
        return to_string(ans);
    }
};