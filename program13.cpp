#include<iostream>
using namespace std;

int main(){

    // =========================================================
    // ARRAYS IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Array:
    - Collection of similar data types
    - Stored in contiguous memory locations
    */

    // Array initialization
    int marks[] = {23, 45, 56, 89};

    /*
    IMPORTANT CONCEPT:
    Array indexing starts from 0
    */

    int mathMarks[4];

    // Assigning values individually
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;

    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // =========================================================
    // MODIFYING ARRAY VALUES
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Array elements can be modified using index
    */

    marks[2] = 455;

    cout<<"These are marks"<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // =========================================================
    // TRAVERSING ARRAY USING FOR LOOP
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Traversing:
    Accessing elements one by one using loop
    */

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Quick quiz:
    // Do the same using while and do-while loops

    // =========================================================
    // POINTERS AND ARRAYS
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Array name acts like pointer to first element
    */

    int* p = marks;

    /*
    IMPORTANT CONCEPT:
    p points to first element of array
    */

    /*
    IMPORTANT CONCEPT:
    p++
    - Moves pointer to next memory location
    - Pointer arithmetic depends on data type size
    */

    cout<<*(p++)<<endl;

    /*
    IMPORTANT CONCEPT:
    *(p++)
    - First prints value
    - Then increments pointer
    */

    cout<<*(++p)<<endl;

    /*
    IMPORTANT CONCEPT:
    *(++p)
    - First increments pointer
    - Then prints value
    */

    // cout<<"The value of *p is "<<*p<<endl;

    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;

    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;

    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 

    /*
    IMPORTANT CONCEPT:
    Pointer arithmetic:
    *(p+n) accesses nth element from pointer position
    */

    return 0;
}