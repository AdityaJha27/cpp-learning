#include <iostream>

using namespace std;

int main()
{
    /*
    =========================================================
    LOOPS IN C++
    =========================================================

    IMPORTANT CONCEPT:
    Loops are used to repeat a block of code multiple times.

    There are three types of loops in C++:
        1. For loop
        2. While loop
        3. Do-While loop
    */

    // =========================================================
    // FOR LOOP IN C++
    // =========================================================

    // int i=1;
    // cout<<i;
    // i++;

    /*
    IMPORTANT CONCEPT:
    Syntax of for loop:

    for(initialization; condition; updation)
    {
        loop body;
    }

    - initialization → runs once
    - condition → checked every iteration
    - updation → updates loop variable
    */

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*
    IMPORTANT CONCEPT:
    Infinite for loop:
    Condition always remains true
    */

    // for (int i = 1; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // =========================================================
    // WHILE LOOP IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Syntax of while loop:

    while(condition)
    {
        statements;
    }

    - Condition checked first
    - If true → loop executes
    */

    // Printing 1 to 40 using while loop

    // int i=1;

    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    /*
    IMPORTANT CONCEPT:
    Infinite while loop:
    while(true) always stays true
    */

    // int i = 1;

    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // =========================================================
    // DO WHILE LOOP IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Syntax of do-while loop:

    do
    {
        statements;
    }while(condition);

    IMPORTANT:
    - Loop body executes at least once
    - Condition checked after execution
    */

    // Printing 1 to 40 using do-while loop

    // int i=1;

    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    /*
    IMPORTANT CONCEPT:
    Even though condition is false,
    do-while loop runs once.
    */

    return 0;
}