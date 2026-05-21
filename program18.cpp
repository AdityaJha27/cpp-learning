#include<iostream>
using namespace std;

// =========================================================
// FIBONACCI FUNCTION USING RECURSION
// =========================================================

/*
IMPORTANT CONCEPT:
Fibonacci Sequence:
1 1 2 3 5 8 13 ...

Each term is sum of previous two terms
*/

int fib(int n){

    /*
    IMPORTANT CONCEPT:
    Base condition:
    Stops recursive calls
    */

    if(n<2){
        return 1;
    }

    /*
    Recursive relation:
    fib(n) = fib(n-2) + fib(n-1)
    */

    return fib(n-2)+fib(n-1);
}

// =========================================================
// FACTORIAL FUNCTION USING RECURSION
// =========================================================

int factorial(int n){

    /*
    IMPORTANT CONCEPT:
    Base condition:
    factorial(0) = 1
    factorial(1) = 1
    */

    if(n<=1){
        return 1;
    }

    /*
    Recursive relation:
    n! = n * (n-1)!
    */

    return n*factorial(n-1);
}

// =========================================================
// STEP BY STEP CALCULATION OF factorial(4)
// =========================================================

/*
factorial(4) = 4 * factorial(3);

factorial(4) = 4 * 3 * factorial(2);

factorial(4) = 4 * 3 * 2 * factorial(1);

factorial(4) = 4 * 3 * 2 * 1;

factorial(4) = 24;
*/

int main(){

    // =========================================================
    // FACTORIAL OF A NUMBER
    // =========================================================

    /*
    6! = 6*5*4*3*2*1 = 720

    0! = 1 by definition

    1! = 1 by definition

    n! = n*(n-1)! for n>1
    */

    int a;

    cout<<"Enter a number"<<endl;

    cin>>a;

    // cout<<"The factorial of "<<a
    //     <<" is "<<factorial(a)<<endl;

    cout<<"The term in fibonacci sequence at position "
        <<a<<" is "<<fib(a)<<endl;

    return 0;
}