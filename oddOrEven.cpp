//Q5.Check even or odd (faster than using % operator ).
#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the no. " << endl;
    cin >> N;
    int x = N&1;
   if(x == 1) {
   cout << "Odd No." << endl;
   }
  else cout << "Even No." << endl;
    return 0;
}