//Q3. Given point N, find the XOR of all no. (between 1 to N).
/*Approach :  **try to observe the pattern.
             N values          XOR upto N
               n = 1              1
               n = 2              3
               n = 3              0
               n = 4              4

               n = 5              1
               n = 6              7
               n = 7              0 
               n = 8              4
   hence :  if(n%4==0) -> print(n)
            if(n%4==1) -> print(1)
            if(n%4==2) -> print(n+1)
            if(n%4==3) -> print(0)   */
#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the element till the XOR has to be calculated : " << endl;
    cin >> N;
    if(N%4==0) cout << N << endl;
    if(N%4==1) cout << 1 << endl;
    if(N%4==2) cout << N+1 << endl;
    if(N%4==3) cout << 0 << endl;
    return 0;1
}