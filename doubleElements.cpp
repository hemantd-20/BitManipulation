//Q12.Every integer appears twice but two integers appears once or they are unique, find them.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Size of the array : " << endl;
    cin >> n;
    int a[25];
    cout << "Enter the elements of the array : " << endl;
    for(int i=0; i<n; i++)
    cin >> a[i];

    int XOR = 0;

    for(int i=0; i<n; i++){
        XOR = XOR ^ a[i];
    }
 
    int count = 0; 

    while(XOR){
        if(XOR&1)
        break;
    count++;
    XOR = XOR >> 1;
    }

    int XOR1 = 0, XOR2 = 0;
    for(int i=0; i<n; i++){
        if(a[i]&(1<<count))
        XOR1 = XOR1 ^ a[i];
        else 
        XOR2 = XOR2 ^ a[i];
    }
    cout << "The two unique no.'s are : " << XOR1 << " and " << XOR2 << endl;
    return 0;
}

/*Logic : We need to find two unique elements, okay
if we xor all elements we get 2(010) as the unique elements are 5(101) and 7(111) and 5^7=2, 
So as we can observe that there is one set bit in result i.e in 2 becoz of the xor of two different bits in 5 and 7, 
hence what we will do is, we will further div this prob in two parts : 
1st : We will find the   'index of'   the first set bit form the right in our xor result i.e in 2(010) which is index 1,
7 has its 1 index bit set and 5 does not,
2nd : Then we will div the array in two parts (having set bit at index 1 or having unset bit at index 1), 
and the nums which are in pairs(are not unique) will come in pair in both the parts,
and at last xor of part 1  will result 5 and xor of part 2 will be 7.
*/