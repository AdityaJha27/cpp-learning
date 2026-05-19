#include <iostream>
using namespace std;

// forward declaration
/*
IMPORTANT CONCEPT:
Forward declaration is used when a class is used before its definition.
Here class y is used inside class x, so we declare it first.
*/

class y;

class x
{
    int data;
    /*
    IMPORTANT CONCEPT:
    Private data member:
    - Only accessible inside class x
    - Cannot be accessed directly outside
    */

public:
    void setvalue(int value)
    {
        data = value;
    }

    friend void add(x, y);
    /*
    IMPORTANT CONCEPT:
    Friend function:
    - Not a member of class x
    - Can still access private members of x and y
    */
};

class y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }

    friend void add(x, y);
    /*
    IMPORTANT CONCEPT:
    Same friend function declared in both classes
    so it can access private members of both x and y
    */
};

void add(x o1, y o2)
{
    /*
    IMPORTANT CONCEPT:
    Friend function definition:
    - Takes objects as parameters
    - Accesses private members directly
    */

    cout << "summing datas of x and y objects gives me "
         << o1.data + o2.num << endl;
}

int main()
{
    x a1;
    a1.setvalue(3);

    y b1;
    b1.setvalue(4);

    add(a1, b1);

    /*
    IMPORTANT CONCEPT:
    Objects of both classes are passed to friend function
    and their private data is accessed and added
    */

    return 0;
}