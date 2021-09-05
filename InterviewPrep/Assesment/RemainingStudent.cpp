// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int calculate(string order, string student) {
        // Code here
        int n0 = 0;
        int n1 = 0;
        
        int N = order.length();
        
        for(char ch:order){
            if(ch == '0') n0++;
            else n1++;
        }
        
        for(char ch:student){
            if(ch == '0' && n0 > 0) n0--;
            if(ch == '1' && n1 > 0) n1--;
        }
        
        return n0 + n1;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string order, student;
		cin >> order >> student;
		Solution obj;
		int ans = obj.calculate(order, student);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends