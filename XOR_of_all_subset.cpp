#include <iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    int XOR = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    cin >> a[i];

    for(int i = 0; i < (1<<n); i++){
        for(int bit = 0; bit < n; bit++)
        if(i&(1<<bit)) 
        XOR ^= a[bit];
    }
    cout << "The XOR of all subsets of array elements : " << XOR << endl;
    return 0;
}