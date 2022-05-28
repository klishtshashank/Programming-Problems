/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=1;
        int e= n;
       
        int mid= i+ (e-i)/2;
        while(i<=n)
        {
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==1)
                i=mid+1;
            else
                e= mid-1;
            mid= i+ (e-i)/2;
        }
     return mid;   
    }
};