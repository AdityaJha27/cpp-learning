#include<iostream>
using namespace std;

// =========================================================
// CONSTRUCTORS WITH DEFAULT ARGUMENTS IN C++
// =========================================================

class simple{

    /*
    IMPORTANT CONCEPT:
    private members
    */

    int data1, data2, data3;

    public:

    // =========================================================
    // CONSTRUCTOR WITH DEFAULT ARGUMENTS
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Default arguments:
    - If values are not passed,
      default values are used
    */

    simple(int a, int b = 9, int c = 15){

        data1 = a;

        data2 = b;

        data3 = c;
    }

    void printData();
};

// =========================================================
// MEMBER FUNCTION DEFINITION OUTSIDE CLASS
// =========================================================

void simple::printData(){

    cout << "The value of data1, data2 and data3 is "
         << data1 << ", "
         << data2 << " and "
         << data3 << endl;
}

int main(){

    /*
    IMPORTANT CONCEPT:
    All arguments provided
    */

    simple s1(5, 10, 20);

    s1.printData();

    /*
    IMPORTANT CONCEPT:
    Only first argument passed
    Remaining values use defaults
    */

    simple s2(7);

    s2.printData();

    simple s3(3);

    s3.printData();

    return 0;
}