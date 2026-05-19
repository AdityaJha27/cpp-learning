#include <iostream>
using namespace std;

// forward declaration
/*
IMPORTANT CONCEPT:
Forward declaration is required because class calculator uses class complex
before complex is fully defined.
*/
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
    /*
    IMPORTANT CONCEPT:
    These functions take objects of class complex as parameters.
    Their definitions come later outside the class.
    */
};

class complex
{
    int a, b;

    /*
    IMPORTANT CONCEPT:
    Friend class:
    - calculator is declared as a friend
    - so ALL functions of calculator can access private members of complex
    */
    friend class calculator;

    // aliter : declaring the entire calculator class as friend

public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

/*
IMPORTANT CONCEPT:
Since calculator is a friend class,
its member functions can access private members a and b of complex.
*/

int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);

    calculator calc;

    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    int resc = calc.sumcompcomplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;

    /*
    IMPORTANT CONCEPT:
    - Friend class allows full access
    - Cleaner than declaring multiple friend functions individually
    */

    return 0;
}