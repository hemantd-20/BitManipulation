//Q.Petr_and_Combination_Clock : codeforces ques 1097B
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    cin >> a[i];
    
    int flag = 0;
    for(int i = 0; i < (1<<n); i++){
        int sum = 0;
        for(int bit = 0; bit < n; bit++){
        if(i&(1<<bit)) 
            sum += a[bit];
        else 
            sum -= a[bit];
        }
        if(sum%360 == 0)
        flag = 1;
        break;
    }
    if(flag==1)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}