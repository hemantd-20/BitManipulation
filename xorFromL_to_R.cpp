//Q4. Given a range of no.(L-R), print the XOR from L to R.
#include <iostream>
using namespace std;
int  main(){
    int L,R,a,b,x;
    cout << "Enter L and R : " << endl;
    cin >> L >> R;
    if(R%4==0) a = R;
    if(R%4==1) a = 1; 
    if(R%4==2) a = R+1;
    if(R%4==3) a = 0;

    if(L-1%4==0) b = L-1;
    if(L-1%4==1) b = 1;
    if(L-1%4==2) b = L;
    if(L-1%4==3) b = 0;

    x = a ^ b;
    cout << "The XOR of no.'s bwt L(" << L << ") to R(" << R << ") is : " << x << endl;
    return 0;
}
//Logic  : find the xor of R and xor of L-1, then XOR both of them i.e xor 0f (R) ^ xor of (L-1). 
//As the L-1 will cancel out from R and you will get L to R range.