#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    // =========================================================
    // VARIABLES IN C++
    // =========================================================

    // int a = 34; 

    // cout<<"The value of a was: "<<a;

    // a = 45; 

    // cout<<"The value of a is: "<<a;

    /*
    IMPORTANT CONCEPT:
    Variables:
    - Their values can be changed during program execution
    */

    // =========================================================
    // CONSTANTS IN C++
    // =========================================================

    // const int a = 3;

    // cout<<"The value of a was: "<<a<<endl;

    /*
    IMPORTANT CONCEPT:
    const keyword:
    - Makes variable constant
    - Value cannot be changed later
    */

    // a = 45; 
    // You will get an error because a is a constant

    // cout<<"The value of a is: "<<a<<endl;

    // =========================================================
    // MANIPULATORS IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Manipulators:
    - Used to format output
    - setw() is defined in iomanip header file
    */

    // int a =3, b=78, c=1233;

    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    /*
    IMPORTANT CONCEPT:
    setw(n):
    - Sets width of output field
    - Helps align output neatly
    */

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // =========================================================
    // OPERATOR PRECEDENCE
    // =========================================================

    int a =3, b=4;

    /*
    IMPORTANT CONCEPT:
    Operator precedence decides:
    - Which operation executes first
    - Similar to BODMAS rule in maths
    */

    // int c = (a*5)+b;

    int c = ((((a*5)+b)-45)+87);

    /*
    IMPORTANT CONCEPT:
    Parentheses increase readability
    and control evaluation order explicitly
    */

    cout<<c;

    return 0;
}