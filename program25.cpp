#include <iostream>
using namespace std;

// =========================================================
// ARRAY OF OBJECTS IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Array of objects:
- Multiple objects of same class
- Stored using array
*/

class Employee
{
    /*
    IMPORTANT CONCEPT:
    private members:
    Accessible only inside class
    */

    int id;

    int salary;

public:

    void setId(void)
    {
        /*
        IMPORTANT:
        salary assigned fixed value
        */

        salary = 122;

        cout << "Enter the id of employee" << endl;

        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is "
             << id
             << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;

    // harry.setId();

    // harry.getId();

    /*
    IMPORTANT CONCEPT:
    Array of Employee objects
    */

    Employee fb[4];

    /*
    IMPORTANT CONCEPT:
    Access objects using index
    */

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();

        fb[i].getId();
    }

    return 0;
}