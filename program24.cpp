#include <iostream>
using namespace std;

// =========================================================
// STATIC DATA MEMBERS & STATIC MEMBER FUNCTIONS IN C++
// =========================================================

class Employee
{
    /*
    IMPORTANT CONCEPT:
    private members:
    Accessible only inside class
    */

    int id;

    /*
    IMPORTANT CONCEPT:
    static data member:
    - Shared by all objects of class
    - Only one copy exists
    */

    static int count;

public:

    void setData(void)
    {
        cout << "Enter the id" << endl;

        cin >> id;

        /*
        IMPORTANT CONCEPT:
        Every time object data is entered,
        count increases
        */

        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is "
             << id
             << " and this is employee number "
             << count
             << endl;
    }

    /*
    IMPORTANT CONCEPT:
    Static member function:
    - Can access only static members
    - Called using class name
    */

    static void getCount(void){

        // cout<<id;

        /*
        IMPORTANT:
        Static functions cannot access
        non-static members directly
        */

        cout<<"The value of count is "
            <<count
            <<endl;
    }
};

// =========================================================
// STATIC MEMBER INITIALIZATION
// =========================================================

/*
IMPORTANT CONCEPT:
Static members must be defined outside class
*/

int Employee::count;

/*
Default value of static int is 0
*/

int main()
{
    Employee harry, rohan, lovish;

    // harry.id = 1;

    // harry.count = 1;

    /*
    IMPORTANT:
    Cannot access private members directly
    */

    harry.setData();

    harry.getData();

    /*
    IMPORTANT CONCEPT:
    Static function called using class name
    */

    Employee::getCount();

    rohan.setData();

    rohan.getData();

    Employee::getCount();

    lovish.setData();

    lovish.getData();

    Employee::getCount();

    return 0;
}