//Q2. Swap the two numbers without using the third variable, using the optimized approach.
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    a = a^b; // a = 5^7
    b = a^b;  // b = 5^7^7 = 5
    a = a^b;  //a = 5^7^5 = 7 .....> hence swaped.
}
int main(){
    int a = 5, b = 7;
    cout << "NO.'s are : " << a << b << endl;
    swap(a,b);
    cout << "NO.'s after optimized swap are : " << a << b <<endl;
    return 0;
}
