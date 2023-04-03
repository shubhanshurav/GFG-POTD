//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int minSteps(string str) {
    int a=0,b=0,c=0,d=0;
    for(int i=0; i<(int)str.length(); ++i) {
        if(str[i]=='a') {
            if(c==0) c=1;
            if(d==1) b++,d=0;
        }
        else {
            if(d==0) d=1;
            if(c==1) a++,c=0;
        }
    }
    if(c==1) a++;
    if(d==1) b++;
    return min(a,b)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends