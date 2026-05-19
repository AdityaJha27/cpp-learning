#include<iostream>

using namespace std;

int main(){

    // cout<<"This is tutorial 9";

    int age;

    cout<< "Tell me your age"<<endl;

    cin>>age;

    /*
    IMPORTANT CONCEPT:
    cin:
    - Used to take input from user
    - >> is extraction operator
    */

    // =========================================================
    // 1. SELECTION CONTROL STRUCTURE: IF ELSE-IF ELSE LADDER
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    if-else ladder:
    - Used for decision making
    - Executes block based on condition
    */

    // if((age<18) && (age>0)){

    //     cout<<"You can not come to my party"<<endl;

    // }

    // else if(age==18){

    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;

    // }

    // else if(age<1){

    //     cout<<"You are not yet born"<<endl;

    // }

    // else{

    //     cout<<"You can come to the party"<<endl;

    // }

    /*
    IMPORTANT CONCEPT:
    Logical AND operator (&&):
    - Both conditions must be true
    */

    // =========================================================
    // 2. SELECTION CONTROL STRUCTURE: SWITCH CASE
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    switch statement:
    - Used when comparing one variable with multiple values
    - Cleaner alternative to many if-else statements
    */

    switch (age)
    {

    case 18:

        cout<<"You are 18"<<endl;

        /*
        IMPORTANT CONCEPT:
        break statement:
        - Stops execution of switch
        - Prevents fall-through
        */

        break;

    case 22:

        cout<<"You are 22"<<endl;

        break;

    case 2:

        cout<<"You are 2"<<endl;

        break;

    default:

        /*
        IMPORTANT CONCEPT:
        default:
        - Executes if no case matches
        */

        cout<<"No special cases"<<endl;

        break;
    }

    cout<<"Done with switch case";

    return 0;
}