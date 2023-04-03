
#include<bits/stdc++.h> 
using namespace std; 

class Solution{
public:

    // Approach: Just convert string to number and through converting just mod it by 11.

    int xmod11(string x)
    {
        //calculate size of string
       int size = x.size();
       int n = 0;
       
       for(int i=0; i<size; i++){           
           n = (n*10+ (x[i] - '0'))%11;           
       }
       
       return n;   
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends