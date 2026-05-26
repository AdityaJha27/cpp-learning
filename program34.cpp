#include <iostream>
using namespace std;

// =========================================================
// COPY CONSTRUCTOR IN C++
// =========================================================

class Number{

    /*
    IMPORTANT CONCEPT:
    Private data member
    */

    int a;

    public:

    // =========================================================
    // DEFAULT CONSTRUCTOR
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Initializes object with value 0
    */

    Number(){

        a = 0;
    }

    // =========================================================
    // PARAMETERIZED CONSTRUCTOR
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Initializes object with user value
    */

    Number(int num){

        a = num;
    }

    // =========================================================
    // COPY CONSTRUCTOR
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    When no copy constructor is found,
    compiler supplies its own copy constructor
    */

    // Number(Number &obj){

    //     cout << "Copy constructor called!!!" << endl;

    //     a = obj.a;
    // }

    // =========================================================
    // MEMBER FUNCTION
    // =========================================================

    void display(){

        cout << "The number for this object is "
             << a << endl;
    }
};

int main(){

    // =========================================================
    // OBJECT CREATION
    // =========================================================

    Number x, y, z(45), z2 = z;

    x.display();

    y.display();

    z.display();

    // =========================================================
    // COPY CONSTRUCTOR INVOKED
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Object z1 copies x
    */

    Number z1(x);

    z1.display();

    // =========================================================
    // COPY ASSIGNMENT
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Copy constructor NOT called here

    Because object already exists
    */

    z2 = z;

    z2.display();

    // =========================================================
    // COPY CONSTRUCTOR CALLED
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Object z3 created using z
    */

    Number z3 = z;

    z3.display();

    /*
    z1 should exactly resemble
    z or x or y
    */

    return 0;
}

/*
=========================================================
IMPORTANT CONCEPTS USED
=========================================================

1. Default Constructor
   Number()

2. Parameterized Constructor
   Number(int num)

3. Copy Constructor
   Number(Number &obj)

4. Compiler Generated Copy Constructor
   - If user does not create one,
     compiler provides its own

5. Copy Constructor Invocation
   Example:
   Number z1(x);

6. Copy Assignment
   Example:
   z2 = z;

   - Copy constructor NOT called
   - Assignment operator used

7. Object Initialization
   Example:
   Number z3 = z;

=========================================================
*/