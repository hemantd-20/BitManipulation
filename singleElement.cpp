//Q1.Given an array containing some elements, there elements which occurs twice and there is only one element which occurs only at once. Find that element.
#include <iostream>
using namespace std; 
int main(){
    int XOR=0, a[9] = {2,8,2,5,8,5,7,7,6};
        for(int i=0; i<9; i++)
        XOR = XOR ^ a[i];
    cout << XOR << endl;
    return 0;
}

//Approach : XOR the elements : xor=0; -> xor(=0)^2=2 ->xor(=2)^1=3 -> xor(=3)^2=1 -> and so on..., so the note is : ALL THE SAME ELEMENTS WILL BE CANCEL OUT AND AT THE END THE SINGLE OCCURING NO. WILL BE LEFT WITH THE RESULT(XOR).
