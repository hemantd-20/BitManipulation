//Q6.Check if the ith bit is set or not.
#include <iostream>
using namespace std;
int main(){
    int N,i,mask;
    cout << "Enter the No." << endl;
    cin >> N;
    cout << "Enter the bit no. i = " << endl;
    cin >> i;
    mask = 1<<i;
    int x = mask&N;                          //V.V.V.V. IMP NOTE :::: Bitwise & ko hamesha variable me store kar ke us variable ko if else me use karna verna ans. galat ayega!!
    //cout << "mask == " << mask << endl;
    //cout << x << endl;
   if(x == 0)
    cout << "ith bit is notSet(i.e 0) " << endl;
    else 
    cout << "ith bit is Set(i.e 1) " << endl;
    return 0;
}