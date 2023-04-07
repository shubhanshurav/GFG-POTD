#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    int addMinChar(string str){    
        
        // calculate size of string
        int size = str.length(); 
        int start = 0, end = size-1, count = 0;
        
        // iterate starting to end
        while(start < end){
            //agar starting or end dono same hai
            //to start ko aage bda do or end ko piche kr do 
            //and count++ kr do
            if(str[start] == str[end]){
                start++;
                end--;
                count++;
            }else{
                start = 0;
                count = 0;
                //agar 0th string element or last string element same nhi hai
                // to end-- kr do[means end ko puche kr do]
                if(str[0] != str[end]){
                    end--;
                }
            }
        }
        
        if(start == end){
            // agar start and end both are same
            count = count*2+1;
        }else{
            // agar start and end both are not same
            count = count*2;
        }
        
        // size me se count ko substract kr do
        return size-count;
        
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 