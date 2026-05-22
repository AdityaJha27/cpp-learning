#include <iostream>
using namespace std;

// =========================================================
// POINT CLASS USING CONSTRUCTOR
// =========================================================

class point{

    /*
    IMPORTANT CONCEPT:
    private members:
    Accessible only inside class
    */

    int x, y;

    public:

    // =========================================================
    // PARAMETERIZED CONSTRUCTOR
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Constructor:
    - Automatically called when object is created
    - Used to initialize object values
    */

    point(int a, int b){

        x = a;

        y = b;
    }

    // =========================================================
    // DISPLAY FUNCTION
    // =========================================================

    void displayPoint(){

        /*
        IMPORTANT CONCEPT:
        Displays coordinates of point
        */

        cout<<"The point is ("
            <<x<<", "<<y<<")"<<endl;
    }
};

int main(){

    // =========================================================
    // OBJECT CREATION
    // =========================================================

    /*
    IMPORTANT CONCEPT:
    Constructor automatically initializes x and y
    */

    point p(1, 1);

    p.displayPoint();

    point q(4, 6);

    q.displayPoint();

    return 0;
}