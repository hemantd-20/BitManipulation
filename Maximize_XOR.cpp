#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T=1;
//	cin >> T;
	for(int i=0; i<T; i++){
	    string A;
	    string B;
	    cin >> A >> B;
	    int N = A.length();
	    int A1 = 0;
	    int A0 = 0; 
	   // int B1 = 0;
	   // int B0 = 0;
	    for(int i=0; i<N; i++){
	        if(A[i]=='1'){
	            A1++;
	        }
	        else {
	            A0++;
	        }
	        if(B[i]=='1'){
	            A1++;
	        }
	        else {
	            A0++;
	        }
	    }
	    int temp = std::min(A1,A0);
	    string ans = "";
	     for(int i=0; i<temp; i++){
	         ans += '1';
	     }
	     for(int i=temp; i<N; i++){
	         ans += '0';
	     }
	         cout << ans << endl;
	    
	}
	return 0;
}
