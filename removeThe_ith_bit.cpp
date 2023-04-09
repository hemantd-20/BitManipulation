//Q8.Erase the ith set bit.
#include <iostream>
using namespace std;
int main(){
    int N,i,mask,x;
    cout << "Enter the no." << endl;
    cin >> N;
    cout << "Enter the bit no. " << endl;
    cin >> i;
    mask = ~(1<<i);
    x = N&mask;
    cout << "NO. after the ith set bit is erased : " << x << endl;
    return 0;
}