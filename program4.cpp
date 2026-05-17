#include<iostream>

using namespace std;

/*
IMPORTANT CONCEPT:
Global variable:
- Declared outside all functions
- Accessible from any function (unless shadowed)
*/
int glo = 6;

void sum(){

    int a; 

    /*
    IMPORTANT CONCEPT:
    - Local variable 'a' exists only inside this function
    - It is uninitialized here (not used though)
    */

    cout<< glo;

    /*
    IMPORTANT CONCEPT:
    - Here global variable 'glo' is accessed
    */
}

int main(){

    int glo=9;

    /*
    IMPORTANT CONCEPT:
    - This 'glo' is LOCAL to main()
    - It SHADOWS the global variable
    */

    glo=78;

    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;

    sum();

    /*
    IMPORTANT CONCEPT:
    - sum() prints GLOBAL glo (6), not main's glo (78)
    */

    cout<<glo<< is_true;

    /*
    IMPORTANT CONCEPT:
    - glo here refers to LOCAL variable in main (78)
    - is_true is boolean (false → prints 0)
    */

    return 0;
}
