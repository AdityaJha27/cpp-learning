#include<iostream>
using namespace std;

// =========================================================
// INLINE FUNCTIONS IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
inline function:
- Requests compiler to replace function call
  with actual function code
- Reduces function call overhead
- Best for small functions
*/

inline int product(int a, int b){

    /*
    IMPORTANT:
    Inline functions should be small and simple
    */

    // Not recommended to use below lines
    // with inline functions

    // static int c = 0;

    /*
    IMPORTANT CONCEPT:
    static variable:
    - Created only once
    - Retains value between function calls
    */

    // c += 1;

    // Increment the static variable

    return a*b;
}

// =========================================================
// DEFAULT ARGUMENTS IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Default arguments:
- Function automatically uses default value
  if argument is not passed
*/

float moneyReceived(int currentMoney, float factor=1.04){

    return currentMoney*factor;
}

// int strlen(const char *p){
// }

int main(){

    int a, b;

    // cout<<"Enter the value of a and b"<<endl;

    // cin>>a>>b;

    /*
    IMPORTANT CONCEPT:
    Inline function calls
    */

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    int money = 100000;

    /*
    IMPORTANT CONCEPT:
    Here 1.1 is passed explicitly,
    so default value 1.04 will NOT be used
    */

    cout<<"For VIP: If you have "<<money
        <<" Rs in your bank account, you will recive "
        <<moneyReceived(money, 1.1)
        <<" Rs after 1 year."<<endl;

    return 0;
}