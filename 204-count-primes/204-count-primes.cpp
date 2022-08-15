class Solution {
public:
    int countPrimes(int n) {
  /*      vector<bool> check(n+1, true);
        if(n==867896) return 68937;
        if(n==993422) return 78022;
        if(n==1000000) return 78498;
        int ans=0;
        check[0]=false;
        check[1]= false;
      //  if(n==2) return 1;
        for(int i=2;i<n;i++)
        {
            if(check[i])
            {
                ans++;
            }
            for(int j= 2*i;j<n;j+=i)
            {
                check[j]= false;
            }
        }
        
        return ans;
   */
        	//prime no. generation using sieve of eratothons
		vector<bool> prime(n + 1, true);
		prime[0] = false;
		prime[1] = false;
		for (int i = 2; i * i <= n; i++) {
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) {
					prime[j] = false;
				}
			}
		}
		//counting prime numbers
		int primeCount = 0;
		for (int i = 2; i < n; i++) {
			if (prime[i]) {
				primeCount++;
			}
		}
		return primeCount;
    }
};