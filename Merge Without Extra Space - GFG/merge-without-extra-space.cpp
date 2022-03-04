// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	   int arr[n+m];
	   int i=0,j=0;
	   int k=0;
	   while(i<n && j<m)
	   {
	       if(arr1[i]>arr2[j])
	        arr[k++]=arr2[j++];
	        
	       else
	        arr[k++]= arr1[i++];
	   }
	   while(i<n){
	       arr[k++]= arr1[i++];
	       
	   }
	    while(j<m){
	       arr[k++]= arr2[j++];
	       
	   }
	   for(int p=0;p<n;p++)
	   {
	       arr1[p]=arr[p];
	   }
	   for(int q=0;q<m;q++)
	   {
	       arr2[q]= arr[n+q];
	   }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends