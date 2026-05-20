#include<iostream>
using namespace std;

// =========================================================
// FUNCTION TO ADD TWO NUMBERS
// =========================================================

int sum(int a, int b){

    int c = a + b;

    return c;
}

// =========================================================
// CALL BY VALUE
// =========================================================

/*
IMPORTANT CONCEPT:
Call by value:
- Copies values into function parameters
- Original variables are NOT changed
*/

// This will NOT swap a and b

void swap(int a, int b){

    // temp  a  b
    // 4     4  5

    int temp = a;

    // 4     5  5

    a = b;

    // 4     5  4

    b = temp;
}

/*
IMPORTANT:
Changes happen only inside function
Original x and y remain unchanged
*/

// =========================================================
// CALL BY REFERENCE USING POINTERS
// =========================================================

/*
IMPORTANT CONCEPT:
Pointers:
- Store addresses of variables
- Allow modification of original values
*/

void swapPointer(int* a, int* b){

    // temp  *a  *b
    // 4      4   5

    int temp = *a;

    // 4      5   5

    *a = *b;

    // 4      5   4

    *b = temp;
}

/*
IMPORTANT CONCEPT:
*a and *b dereference pointers
and access original variable values
*/

// =========================================================
// CALL BY REFERENCE USING REFERENCE VARIABLES
// =========================================================

/*
IMPORTANT CONCEPT:
Reference variables:
- Another name for existing variable
- Uses & symbol
*/

// int &

void swapReferenceVar(int &a, int &b){

    // temp  a  b
    // 4     4  5

    int temp = a;

    // 4     5  5

    a = b;

    // 4     5  4

    b = temp;

    // return a;
}

/*
IMPORTANT CONCEPT:
Changes directly affect original variables
No copies are created
*/

int main(){

    int x =4, y=5;

    // cout<<"The sum of 4 and 5 is "<<sum(a, b);

    cout<<"The value of x is "<<x
        <<" and the value of y is "<<y<<endl;

    // swap(x, y);

    /*
    This will NOT swap values
    because call by value is used
    */

    // swapPointer(&x, &y);

    /*
    This WILL swap values
    using pointer references
    */

    swapReferenceVar(x, y);

    /*
    This WILL swap values
    using C++ reference variables
    */

    // swapReferenceVar(x, y) = 766;

    /*
    Interesting Concept:
    If function returns reference,
    returned value can also be modified
    */

    cout<<"The value of x is "<<x
        <<" and the value of y is "<<y<<endl;

    return 0;
}