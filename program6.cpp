// There are two types of header files:

// 1. System header files: 
// These come with the compiler
#include<iostream>

// 2. User defined header files:
// These are created by the programmer
// #include "this.h" 
// --> This will produce an error if this.h is not present in current directory

using namespace std;

int main(){

    int a=4, b=5;

    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;

    // =========================================================
    // ARITHMETIC OPERATORS
    // Used to perform mathematical operations
    // =========================================================

    cout<<"The value of a + b is "<<a+b<<endl; // Addition
    cout<<"The value of a - b is "<<a-b<<endl; // Subtraction
    cout<<"The value of a * b is "<<a*b<<endl; // Multiplication
    cout<<"The value of a / b is "<<a/b<<endl; // Division
    cout<<"The value of a % b is "<<a%b<<endl; // Modulus (remainder)

    /*
    IMPORTANT CONCEPT:
    Post Increment (a++)
    - First uses current value
    - Then increases value by 1
    */

    cout<<"The value of a++ is "<<a++<<endl;

    /*
    IMPORTANT CONCEPT:
    Post Decrement (a--)
    - First uses current value
    - Then decreases value by 1
    */

    cout<<"The value of a-- is "<<a--<<endl;

    /*
    IMPORTANT CONCEPT:
    Pre Increment (++a)
    - First increases value
    - Then uses updated value
    */

    cout<<"The value of ++a is "<<++a<<endl;

    /*
    IMPORTANT CONCEPT:
    Pre Decrement (--a)
    - First decreases value
    - Then uses updated value
    */

    cout<<"The value of --a is "<<--a<<endl;

    cout<<endl;

    // =========================================================
    // ASSIGNMENT OPERATORS
    // Used to assign values to variables
    // =========================================================

    // int a =3, b=9;
    // char d='d';

    // =========================================================
    // COMPARISON OPERATORS
    // Used to compare two values
    // Result is either true(1) or false(0)
    // =========================================================

    cout<<"Following are the comparison operators in C++"<<endl;

    cout<<"The value of a == b is "<<(a==b)<<endl; // Equal to
    cout<<"The value of a != b is "<<(a!=b)<<endl; // Not equal to
    cout<<"The value of a >= b is "<<(a>=b)<<endl; // Greater than equal to
    cout<<"The value of a <= b is "<<(a<=b)<<endl; // Less than equal to
    cout<<"The value of a > b is "<<(a>b)<<endl;   // Greater than
    cout<<"The value of a < b is "<<(a<b)<<endl;   // Less than

    // =========================================================
    // LOGICAL OPERATORS
    // Used to combine conditions
    // =========================================================

    cout<<"Following are the logical operators in C++"<<endl;

    /*
    IMPORTANT CONCEPT:
    Logical AND (&&)
    Returns true only if BOTH conditions are true
    */

    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"
        <<((a==b) && (a<b))<<endl;

    /*
    IMPORTANT CONCEPT:
    Logical OR (||)
    Returns true if AT LEAST ONE condition is true
    */

    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"
        <<((a==b) || (a<b))<<endl;

    /*
    IMPORTANT CONCEPT:
    Logical NOT (!)
    Reverses the result
    true becomes false and false becomes true
    */

    cout<<"The value of this logical not operator (!(a==b)) is:"
        <<(!(a==b))<<endl;

    return 0;
}