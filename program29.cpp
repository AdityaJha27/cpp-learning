#include<iostream>
using namespace std;

class complex{

    int a, b;

public:

    /*
    IMPORTANT CONCEPT:
    Constructor:
    - Special member function
    - Same name as class
    - Automatically called when object is created
    - Used to initialize objects
    */

    // constructor declaration
    complex(void);

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

/*
IMPORTANT CONCEPT:
Constructor definition outside class using scope resolution operator (::)
*/

complex::complex(void)
{
    /*
    IMPORTANT CONCEPT:
    Default constructor:
    - Takes no parameters
    - Automatically invoked when object is created
    */

    a = 10;
    b = 20;

    // cout<<"Hello world";
}

int main(){

    /*
    IMPORTANT CONCEPT:
    Constructor automatically runs for every object
    */

    complex c1, c2, c3;

    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}

// =========================================================
// CHARACTERISTICS OF CONSTRUCTORS
// =========================================================

/*
1. It should be declared in the public section of the class.

2. They are automatically invoked whenever the object is created.

3. They cannot return values and do not have return types.

4. Constructors can have default arguments.

5. We cannot refer to their address.

6. Constructor name must be same as class name.

7. Constructor helps in object initialization automatically.
*/