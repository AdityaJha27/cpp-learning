#include<iostream>
using namespace std;

int main(){

    // =========================================================
    // POINTERS IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Pointer:
    - A variable that stores the address of another variable
    */

    int a = 3;

    /*
    IMPORTANT CONCEPT:
    int* b
    - b is a pointer variable
    - It can store address of integer variable
    */

    int* b;

    b = &a;

    /*
    IMPORTANT CONCEPT:
    & (Address Of Operator)
    - Returns memory address of variable
    */

    cout<<"The address of a is "<<&a<<endl;

    cout<<"The address of a is "<<b<<endl;

    /*
    IMPORTANT CONCEPT:
    * (Dereference Operator)
    - Gives value stored at address
    */

    cout<<"The value at address b is "<<*b<<endl;

    // =========================================================
    // POINTER TO POINTER
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Pointer to pointer:
    - Stores address of another pointer
    */

    int** c = &b;

    cout<<"The address of b is "<<&b<<endl;

    cout<<"The address of b is "<<c<<endl;

    /*
    IMPORTANT CONCEPT:
    *c:
    - Gives value stored at c
    - Which is address stored in b
    */

    cout<<"The value at address c is "<<*c<<endl;

    /*
    IMPORTANT CONCEPT:
    **c:
    - Double dereference
    - Gives final value stored in variable a
    */

    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}