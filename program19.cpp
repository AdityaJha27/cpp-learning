#include<iostream>
using namespace std;

// =========================================================
// FUNCTION OVERLOADING IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Function Overloading:
- Multiple functions can have same name
- Parameters must be different
    → different number of arguments
    → different data types
*/

int sum(float a, int b){

    cout<<"Using function with 2 arguments"<<endl;

    return a+b;
}

int sum(int a, int b, int c){

    cout<<"Using function with 3 arguments"<<endl;

    return a+b+c;
}

// =========================================================
// VOLUME OF CYLINDER
// =========================================================

/*
Formula:
πr²h
*/

int volume(double r, int h){

    return(3.14 * r *r *h);
}

// =========================================================
// VOLUME OF CUBE
// =========================================================

/*
Formula:
a³
*/

int volume(int a){

    return (a * a * a);
}

// =========================================================
// VOLUME OF RECTANGULAR BOX
// =========================================================

/*
Formula:
l*b*h
*/

int volume (int l, int b, int h){

    return (l*b*h);
}

int main(){

    cout<<"The sum of 3 and 6 is "
        <<sum(3,6)<<endl;

    cout<<"The sum of 3, 7 and 6 is "
        <<sum(3, 7, 6)<<endl;

    cout<<"The volume of cuboid of 3, 7 and 6 is "
        <<volume(3, 7, 6)<<endl;

    cout<<"The volume of cylinder of radius 3 and height 6 is "
        <<volume(3, 6)<<endl;

    cout<<"The volume of cube of side 3 is "
        <<volume(3)<<endl;

    return 0;
}