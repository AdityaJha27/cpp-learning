#include<iostream>
using namespace std;

// =========================================================
// CONSTRUCTOR OVERLOADING IN C++
// =========================================================

class BankDeposit{

    /*
    IMPORTANT CONCEPT:
    Private data members
    */

    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:

    // =========================================================
    // FLOAT CONSTRUCTOR
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    This constructor runs when
    float interest rate is passed

    Example:
    0.04 means 4%
    */

    BankDeposit(int p, int y, float r){

        principal = p;

        years = y;

        interestRate = r;

        returnValue = p;

        /*
        IMPORTANT CONCEPT:
        Compound Interest Calculation
        */

        for(int i=0; i<y; i++){

            returnValue = returnValue * (1 + interestRate);
        }
    }

    // =========================================================
    // INTEGER CONSTRUCTOR
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    This constructor runs when
    integer interest rate is passed

    Example:
    14 means 14%
    */

    BankDeposit(int p, int y, int r){

        principal = p;

        years = y;

        /*
        IMPORTANT CONCEPT:
        Converting integer percentage
        into decimal value
        */

        interestRate = float(r)/100;

        returnValue = p;

        /*
        IMPORTANT CONCEPT:
        Compound Interest Calculation
        */

        for(int i=0; i<y; i++){

            returnValue = returnValue * (1 + interestRate);
        }
    }

    // =========================================================
    // MEMBER FUNCTION
    // =========================================================

    void show(){

        cout << endl
             << "Principal amount was "
             << principal

             << ". Return value after "
             << years

             << " years is "
             << returnValue << endl;
    }
};

int main(){

    int p, y;

    /*
    IMPORTANT CONCEPT:
    Different variables for
    different constructor calls
    */

    float r;

    int R;

    // =========================================================
    // FLOAT CONSTRUCTOR CALL
    // =========================================================

    cout << "Enter p, y and float interest rate" << endl;

    cin >> p >> y >> r;

    /*
    IMPORTANT CONCEPT:
    Implicit constructor call

    Float constructor will run
    */

    BankDeposit bd1(p, y, r);

    bd1.show();

    // =========================================================
    // INTEGER CONSTRUCTOR CALL
    // =========================================================

    cout << "\nEnter p, y and integer interest rate" << endl;

    cin >> p >> y >> R;

    /*
    IMPORTANT CONCEPT:
    Integer constructor will run
    */

    BankDeposit bd2(p, y, R);

    bd2.show();

    return 0;
}

/*
=========================================================
IMPORTANT CONCEPTS USED
=========================================================

1. Constructor Overloading
   - Same class contains multiple constructors

2. Function Signature
   - Constructors differ by parameter types

3. Implicit Constructor Call
   Example:
   BankDeposit bd1(p, y, r);

4. Compile Time Polymorphism
   - Compiler decides which constructor to call

5. Compound Interest Logic
   returnValue = returnValue * (1 + interestRate);

6. Integer to Float Conversion
   float(r)/100

=========================================================
*/