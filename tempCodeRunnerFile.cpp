#include <iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    cin >> n;
    for(int i=0; i<n; i++)
    cin >> a[i];

    for(int i = 0; i < (1<<n); i++){
        int sum = 0;
        for(int bit = 0; bit < n; bit++){
        if(i&(1<<bit)) 
            sum += a[bit];
        else 
            sum -= a[bit];
        }
        if(sum%360 == 0)
        cout << "YES" << endl;
        break;
    }
    return 0;
}