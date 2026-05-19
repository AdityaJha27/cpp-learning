#include<iostream>
using namespace std;

int main(){

    // =========================================================
    // BREAK STATEMENT IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    break statement:
    - Immediately exits the loop
    - Control comes outside the loop
    */

    // for (int i = 0; i < 40; i++)
    // {
    //     if(i==2){

    //         /*
    //         IMPORTANT CONCEPT:
    //         When i becomes 2,
    //         loop stops completely
    //         */

    //         break;
    //     }

    //     cout<<i<<endl;
    // }

    // =========================================================
    // CONTINUE STATEMENT IN C++
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    continue statement:
    - Skips current iteration
    - Remaining loop continues normally
    */

    for (int i = 0; i < 40; i++)
    {
        if(i==2){

            /*
            IMPORTANT CONCEPT:
            When i == 2:
            - cout statement is skipped
            - Loop continues with next iteration
            */

            continue;
        }

        cout<<i<<endl;
    }

    return 0;
}