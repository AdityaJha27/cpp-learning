#include <iostream>
using namespace std;

// =========================================================
// PARAMETERIZED CONSTRUCTOR IN C++
// =========================================================

class complex{

    /*
    IMPORTANT CONCEPT:
    private members:
    Accessible only inside class
    */

    int a, b;

public:

    // =========================================================
    // CONSTRUCTOR DECLARATION
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Constructor:
    - Special member function
    - Automatically called when object is created
    - Same name as class
    */

    complex(int, int);

    void printnumber()
    {
        cout << "your number is "
             << a << " + "
             << b << "i" << endl;
    }
};

// =========================================================
// CONSTRUCTOR DEFINITION
// =========================================================

/*
IMPORTANT CONCEPT:
Parameterized constructor:
- Constructor that accepts arguments
- Used to initialize object values
*/

complex::complex(int x, int y)
{
    a = x;

    b = y;

    // cout<<"Hello world";
}

int main(){

    // =========================================================
    // IMPLICIT CONSTRUCTOR CALL
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Implicit call:
    Constructor called automatically
    */

    complex a(4, 6);

    // =========================================================
    // EXPLICIT CONSTRUCTOR CALL
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Explicit constructor call
    */

    complex b = complex(5, 7);

    a.printnumber();

    b.printnumber();

    return 0;
}