#include<iostream>
using namespace std;

// =========================================================
// COMPLEX NUMBER USING OBJECTS IN C++
// =========================================================

class complex{

    /*
    IMPORTANT CONCEPT:
    private members:
    Accessible only inside class
    */

    int a;
    int b;

    public: 

        /*
        IMPORTANT CONCEPT:
        Member function to set values
        */

        void setData(int v1, int v2){

            a = v1;

            b = v2;
        }

        /*
        IMPORTANT CONCEPT:
        Object as function argument
        - Objects can be passed to functions
        - Here o1 and o2 are objects
        */

        void setDataBySum(complex o1, complex o2){

            /*
            IMPORTANT CONCEPT:
            Current object stores sum
            of two complex numbers
            */

            a = o1.a + o2.a;

            b = o1.b + o2.b;
        }

        /*
        IMPORTANT CONCEPT:
        Display function
        */

        void printNumber(){

            cout<<"Your complex number is "
                <<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){

    /*
    IMPORTANT CONCEPT:
    Creating objects of class
    */

    complex c1, c2, c3;

    c1.setData(1, 2);

    c1.printNumber();

    c2.setData(3, 4);

    c2.printNumber();

    /*
    IMPORTANT CONCEPT:
    c3 stores sum of c1 and c2
    */

    c3.setDataBySum(c1, c2);

    c3.printNumber();

    return 0;
}