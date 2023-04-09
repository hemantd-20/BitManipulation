//BIT MASKING 
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    int x;
    int o;
    int op;

     cout << "Enter the no of operation you want to do in set data structure :" << endl;
     cin >> op;
     cout << "To add -> 1 \n To remove -> 0 " << endl;

    for(int i=0; i<op; i++){

    cout << "Enter the operation (1 or 0):" << endl;
    cin >> o;

    switch(o){

        case 1 : cout << "Enter the element to add to set data structure " << endl;
            cin >> x;
            n | (1<<x);
            break;
        
        case 0 : cout << "Enter the element to remove from the set data structure " << endl;
        cin >> x;
        n ^ (1<<x);
        break;
    }
    }
    int p;
    for(int bit = 0; bit<60; bit++){
       p =  n & (1<<bit);
            if(p == 1) {
            cout << bit;
            }
    }
    return 0;
}