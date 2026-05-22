#include<iostream>
using namespace std;

// =========================================================
// CLASS IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Class:
- User defined data type
- Collection of data members and member functions
*/

class Employee
{
    /*
    IMPORTANT CONCEPT:
    private members:
    - Accessible only inside class
    - Cannot be accessed directly from object
    */

    private:

    int a, b, c;

    /*
    IMPORTANT CONCEPT:
    public members:
    - Accessible directly using objects
    */

    public:

    int d, e;

    // Function declaration
    void setdata(int a, int b, int c);

    void getdata(){

        cout<<"The value of a is "<<a<<endl;

        cout<<"The value of b is "<<b<<endl;

        cout<<"The value of c is "<<c<<endl;

        cout<<"The value of d is "<<d<<endl;

        cout<<"The value of e is "<<e<<endl;
    }
};

// =========================================================
// MEMBER FUNCTION DEFINITION OUTSIDE CLASS
// =========================================================

/*
IMPORTANT CONCEPT:
Scope resolution operator (::)
- Used to define class functions outside class
*/

void Employee :: setdata(int a1, int b1, int c1){

    a = a1;

    b = b1;

    c = c1;
}

int main(){

    Employee harry;

    // harry.a = 34;

    /*
    IMPORTANT:
    This gives error because
    a is private member
    */

    harry.d = 34;

    harry.e = 89;

    /*
    IMPORTANT CONCEPT:
    Private members can be modified
    using public member functions
    */

    harry.setdata(1, 2, 4);

    harry.getdata();

    return 0;
}