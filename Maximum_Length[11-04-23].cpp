#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int a, int b, int c) {
        long sum = (long)a + (long)b + (long)c;
        long ab = ((long)a + (long)b +1)*2;
        long bc = ((long)b + (long)c +1)*2;
        long ac = ((long)a + (long)c + 1)*2;
        if(ab >= (long)c && bc >= (long)a && ac >= (long)b){
            return (int)sum;
        }
        else{
            return -1;
        }
    }
};


int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
