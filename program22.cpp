#include <iostream>
#include <string>
using namespace std;

// =========================================================
// OOPs - CLASSES AND OBJECTS
// =========================================================

// C++ --> initially called --> C with classes by Stroustroup

/*
IMPORTANT CONCEPT:
Class:
- User defined data type
- Contains data members and member functions
*/

// class --> extension of structures (in C)

// structures had limitations
//      - members are public
//      - No methods

// classes --> structures + more

// classes --> can have methods and properties

// classes --> can make few members as private & few as public

// structures in C++ are typedefed

// you can declare objects along with class declaration like this:

/*
class Employee{
        // Class definition
} harry, rohan, lovish;
*/

// harry.salary = 8 makes no sense if salary is private

// =========================================================
// NESTING OF MEMBER FUNCTIONS
// =========================================================

/*
IMPORTANT CONCEPT:
Nesting of member functions:
- One member function can call another member function
*/

class binary
{
private:

    /*
    IMPORTANT CONCEPT:
    private members:
    Accessible only inside class
    */

    string s;

    void chk_bin(void);

public:

    /*
    IMPORTANT CONCEPT:
    public members:
    Accessible using object
    */

    void read(void);

    void ones_compliment(void);

    void display(void);
};

// =========================================================
// READ FUNCTION
// =========================================================

void binary::read(void)
{
    cout << "Enter a binary number" << endl;

    cin >> s;
}

// =========================================================
// CHECK BINARY FUNCTION
// =========================================================

/*
IMPORTANT CONCEPT:
Checks whether input contains only 0 and 1
*/

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /*
        IMPORTANT CONCEPT:
        string.at(i):
        Access character at index i
        */

        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;

            /*
            IMPORTANT CONCEPT:
            exit(0):
            Terminates program immediately
            */

            exit(0);
        }
    }
}

// =========================================================
// ONE'S COMPLEMENT FUNCTION
// =========================================================

/*
IMPORTANT CONCEPT:
One's complement:
0 becomes 1
1 becomes 0
*/

void binary::ones_compliment(void)
{
    /*
    IMPORTANT CONCEPT:
    Nested member function call
    */

    chk_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

// =========================================================
// DISPLAY FUNCTION
// =========================================================

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

    cout<<endl;
}

int main()
{
    binary b;

    b.read();

    // b.chk_bin();

    /*
    IMPORTANT:
    chk_bin() is private
    So it cannot be accessed directly
    */

    b.display();

    b.ones_compliment();

    b.display();

    return 0;
}