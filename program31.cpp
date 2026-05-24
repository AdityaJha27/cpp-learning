#include<iostream>
using namespace std;

// =========================================================
// CONSTRUCTOR OVERLOADING IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Constructor Overloading:
- Multiple constructors in same class
- Constructors have same name
- Parameters must be different
*/

class complex{

    /*
    IMPORTANT CONCEPT:
    private members
    */

    int a, b;

    public:

    // =========================================================
    // DEFAULT CONSTRUCTOR
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Default constructor:
    - Takes no arguments
    */

    complex(){

        a = 0;

        b = 0;
    }

    // =========================================================
    // PARAMETERIZED CONSTRUCTOR (2 ARGUMENTS)
    // =========================================================

    complex(int x, int y){

        a = x;

        b = y;
    }

    // =========================================================
    // PARAMETERIZED CONSTRUCTOR (1 ARGUMENT)
    // =========================================================

    complex(int x){

        a = x;

        b = 0;
    }

    // =========================================================
    // DISPLAY FUNCTION
    // =========================================================

    void printnumber(){

        cout<<"your number is "
            <<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){

    /*
    IMPORTANT CONCEPT:
    Calls constructor with 2 arguments
    */

    complex c1(4,5);

    c1.printnumber();

    /*
    IMPORTANT CONCEPT:
    Calls constructor with 1 argument
    */

    complex c2(3);

    c2.printnumber();

    /*
    IMPORTANT CONCEPT:
    Calls default constructor
    */

    complex c3;

    c3.printnumber();

    return 0;
}