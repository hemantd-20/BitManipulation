//Brute Force of xor of all subsets.
#include <iostream>
using namespace std;
int main(){
    int a[10];
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    cout << "Enter array  elements : " << endl;
    for(int i=0; i<n; i++)
    cin >> a[i];
    int XOR = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        XOR = XOR ^ a[j];
    }
    cout << XOR << endl;
    return 0;
}