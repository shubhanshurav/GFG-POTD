//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minOperations(int N) {
       
      //Approach - 01  
      long long int divide = N/2;
      long long int rem = N-divide;
      return rem*divide;  
      
      /* Approach - 02 [Only 1 Line Solut]
      
      return (n/2) * (n-(n/2));
      
      */
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minOperations(n) << endl;
    }
    return 0;
}
// } Driver Code Ends