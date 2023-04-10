
#include <bits/stdc++.h>
using namespace std;

//<------------->  Date - [10/04/23]  <------------------------------->

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        map<int, int> mp;
        for(auto i: lines) {
            int u = i[0], v = i[1] + 1;
            mp[u]++, mp[v]--;
        }
        
        int ans = 0, sum = 0;
        for(auto i: mp) {
            sum += i.second;
            ans = max(ans, sum);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends