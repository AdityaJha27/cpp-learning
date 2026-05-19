#include <iostream>
using namespace std;

// forward declaration
class c2;

/*
IMPORTANT CONCEPT:
Forward declaration is used when one class is referenced before its definition.
Here c2 is used inside c1 friend function, so we declare it first.
*/

class c1
{
    int val1; 
    /*
    IMPORTANT CONCEPT:
    val1 is private by default in class (because no access specifier is written)
    */

    friend void exchange(c1 &, c2 &); 
    /*
    IMPORTANT CONCEPT:
    Friend function:
    - Not a member of class
    - Can access private members of both classes
    - Declared inside class but defined outside
    */

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;

    friend void exchange(c1 &, c2 &);
    /*
    IMPORTANT CONCEPT:
    Same friend function is declared in both classes
    so it can access private members of both c1 and c2
    */

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display()
    {
        cout << val2 << endl;
    }
};

/*
IMPORTANT CONCEPT:
Swapping logic using temporary variable:
temp = a;
a = b;
b = temp;
This is used to exchange values safely.
*/

void exchange(c1 &x, c2 &y)
{
    /*
    IMPORTANT CONCEPT:
    Pass by reference (&):
    - No copy is made
    - Direct modification of original objects happens
    */

    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1, oc2);

    /*
    IMPORTANT CONCEPT:
    After friend function executes,
    values of both objects are swapped
    */

    cout << "the value of c1 after exchanging becomes: ";
    oc1.display();

    cout << "the value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}