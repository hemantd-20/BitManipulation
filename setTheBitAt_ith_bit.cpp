//Q7.Set the ith bit of the no.
#include <iostream>
using namespace std;
int main(){
    int N, i,x,mask;
    cout << "Enter the no. " << endl;
    cin >> N;
    cout << "Enter the bit no. i : " << endl;
    cin >> i;
    mask = 1 << i;
    x = N | mask;                                            
    cout << "No. after making the ith bit set is : " << x << endl;
    return 0;
}
//Bitwise OR -> if atleast 1 is one then 1,
// and if all are zero then 0.