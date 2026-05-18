#include<iostream>
using namespace std;

class complex{
    int a, b;

    /*
    IMPORTANT CONCEPT:
    - By default, class members are private
    - a and b cannot be accessed outside directly
    */

public:
    void setnumber(int x, int y){
        a = x;
        b = y;
    }

    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

    /*
    IMPORTANT CONCEPT: FRIEND FUNCTION
    - friend keyword allows external function to access private members
    - sumcomplex is NOT a member function of class complex
    - but still has access to private data (a, b)
    */

    friend complex sumcomplex(complex o1, complex o2);
};

complex sumcomplex(complex o1, complex o2){
    /*
    IMPORTANT CONCEPT:
    - Friend function definition is outside the class
    - It takes objects as parameters
    - It can access private members using object names
    */

    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    complex c1, c2, sum;

    c1.setnumber(3, 4);
    c1.printnumber();

    c2.setnumber(5, 6);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}

/*
IMPORTANT CONCEPTS SUMMARY:

1. properties of friend functions
2. since it is not in the scope of class, it cannot be called from object
   example: c1.sumcomplex() ❌ invalid
3. Can be invoked without the help of any object
4. usually contains objects as arguments
5. can be declared inside public or private section of the class
6. It cannot access members directly by name, needs object_name.member_name
*/