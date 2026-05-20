#include<iostream>
using namespace std;

// =========================================================
// STRUCTURES IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Structure:
- User defined data type
- Groups different data types together
*/

typedef struct employee
{
    int eId;       // 4 bytes
    char favChar;  // 1 byte
    float salary;  // 4 bytes

} ep;

/*
IMPORTANT CONCEPT:
typedef:
- Creates alias (short name)
- ep can now be used instead of struct employee
*/

// =========================================================
// UNIONS IN C++
// =========================================================

/*
IMPORTANT CONCEPT:
Union:
- Similar to structure
- But all members share same memory location
- Only one member can contain value at a time
*/

union money
{
    int rice;     // 4 bytes
    char car;     // 1 byte
    float pounds; // 4 bytes
};

int main(){

    // =========================================================
    // ENUMS IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    enum:
    - Used to assign names to integer constants
    - Values start from 0 by default
    */

    enum Meal{ breakfast, lunch, dinner };

    /*
    Values:
    breakfast = 0
    lunch = 1
    dinner = 2
    */

    Meal m1 = lunch;

    /*
    IMPORTANT CONCEPT:
    enum variables store integer values internally
    */

    cout<<(m1==2);

    /*
    Since lunch = 1,
    (m1==2) becomes false → prints 0
    */

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 

    // =========================================================
    // UNION EXAMPLE
    // =========================================================

    // union money m1;

    // m1.rice = 34;

    // m1.car = 'c';

    /*
    IMPORTANT CONCEPT:
    Assigning new value overwrites previous union data
    because all members share same memory
    */

    // cout<<m1.car;

    // =========================================================
    // STRUCTURE EXAMPLE
    // =========================================================

    // ep harry;

    // struct employee shubham;
    // struct employee rohanDas;

    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;

    /*
    IMPORTANT CONCEPT:
    Structure members are accessed using dot operator (.)
    */

    // cout<<"The value is "<<harry.eId<<endl; 

    // cout<<"The value is "<<harry.favChar<<endl; 

    // cout<<"The value is "<<harry.salary<<endl; 

    return 0;
}