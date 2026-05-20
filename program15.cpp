#include<iostream>
using namespace std;

// =========================================================
// FUNCTION PROTOTYPES IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Function Prototype:
- Tells compiler that function exists
- Declares function before main()
- Helps compiler understand:
    → return type
    → function name
    → parameters
*/

// type function-name(arguments);

// int sum(int a, int b);      // Acceptable

// int sum(int a, b);          // Not Acceptable

int sum(int, int);             // Acceptable

// void g(void);               // Acceptable

void g();                      // Acceptable

int main(){

    int num1, num2;

    cout<<"Enter first number"<<endl;

    cin>>num1;

    cout<<"Enter second number"<<endl;

    cin>>num2;

    /*
    IMPORTANT CONCEPT:
    num1 and num2 are ACTUAL PARAMETERS
    - Actual values passed to function
    */

    cout<<"The sum is "<<sum(num1, num2);

    g();

    return 0;
}

// =========================================================
// FUNCTION DEFINITION
// =========================================================

int sum(int a, int b){

    /*
    IMPORTANT CONCEPT:
    a and b are FORMAL PARAMETERS
    - Receive values from actual parameters
    */

    int c = a+b;

    return c;

    /*
    IMPORTANT CONCEPT:
    return:
    - Sends value back to function call
    */
}

void g(){

    /*
    IMPORTANT CONCEPT:
    void function:
    - Does not return any value
    */

    cout<<"\nHello, Good Morning";
}