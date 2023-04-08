
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int>ans;
        stack<int>st; 
        
        for(int i=0;i<arr.size();i++){
            //if array is empty then insert ith element into stack 
            if(st.empty()){
                st.push(arr[i]);
            }else{
                // if stack's top element is positive and array's ith element is negative
                //or if stack's top element is negative and array's ith element is positive
                //then stack's top element ko delete kr denge otherwise stack me push kr denge
                if((st.top() >=0 and arr[i] <0) or (st.top()<0 and arr[i] >=0)){
                    st.pop();
                }else{
                    st.push(arr[i]);
                }
            }
        }
        
        
        while(!st.empty()){
            // push stack's top element into ans vector
            // and afterthat delete it
            ans.push_back(st.top());
            st.pop();
        }
        
        // and finally reverse the ans vector and return it
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}