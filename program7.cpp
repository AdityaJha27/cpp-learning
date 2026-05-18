#include<iostream> 

using namespace std;

/*
IMPORTANT CONCEPT:
Global variable:
- Declared outside all functions
- Accessible throughout the program
*/
int c = 45;

int main(){
    
    // =========================================================
    // BUILD IN DATA TYPES
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Basic built-in data types in C++:
    - int
    - float
    - char
    - double
    - bool
    */

    // int a, b, c;

    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;

    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;

    // c = a + b;

    // cout<<"The sum is "<<c<<endl;

    /*
    IMPORTANT CONCEPT:
    Scope Resolution Operator (::)
    - Used to access global variable
    - Here ::c refers to global c
    */

    // cout<<"The global c is "<<::c;

    // =========================================================
    // FLOAT, DOUBLE AND LONG DOUBLE LITERALS
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Literal suffixes:
    - F or f → float
    - L or l → long double
    */

    // float d=34.4F;
    // long double e = 34.4L; 

    /*
    IMPORTANT CONCEPT:
    sizeof() operator:
    - Returns size in bytes
    */

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // cout<<"The value of d is "<<d<<endl
    //     <<"The value of e is "<<e;  

    // =========================================================
    // REFERENCE VARIABLES
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Reference variable:
    - Another name for existing variable
    - Uses & symbol
    */

    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder

    // float x = 455;

    // float & y = x;

    // cout<<x<<endl;
    // cout<<y<<endl;

    // =========================================================
    // TYPECASTING
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Typecasting:
    - Converting one data type into another
    */

    int a = 45;   
    float b = 45.46;

    /*
    IMPORTANT CONCEPT:
    Converting int to float
    */

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    /*
    IMPORTANT CONCEPT:
    Converting float to int
    - Decimal part gets removed
    */

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    int c = int(b);

    /*
    IMPORTANT CONCEPT:
    Implicit + Explicit conversion in expressions
    */

    cout<<"The expression is "<<a + b<<endl;

    cout<<"The expression is "<<a + int(b)<<endl;

    cout<<"The expression is "<<a + (int)b<<endl;

    return 0;
}