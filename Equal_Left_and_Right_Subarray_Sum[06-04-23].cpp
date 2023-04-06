#include<bits/stdc++.h>
using namespace std;


class Array{

public:
    template <class T>
    static void input(vector<T> &A,int n){

        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A){
        
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        
        int totalSum = accumulate(A.begin(),A.end(),0);
        int startingSum = 0;
        for(int i=0;i<N;i++){
            if(totalSum-A[i]-startingSum == startingSum){
                return i+1;
            }    
            startingSum += A[i];
        }
        return -1;
    }
};

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}
