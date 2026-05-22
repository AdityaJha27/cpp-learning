#include <iostream>
using namespace std;

// =========================================================
// ARRAYS IN CLASSES
// =========================================================

/*
IMPORTANT CONCEPT:
Class:
- User defined data type
- Contains data members and member functions
*/

class Shop
{
    /*
    IMPORTANT CONCEPT:
    Arrays inside class:
    - Used to store multiple values
    - Here item IDs and prices are stored
    */

    int itemId[100];

    int itemPrice[100];

    /*
    IMPORTANT CONCEPT:
    counter:
    Keeps track of number of items entered
    */

    int counter;

public:

    /*
    IMPORTANT CONCEPT:
    Initializes counter to 0
    */

    void initCounter(void)
    {
        counter = 0;
    }

    void setPrice(void);

    void displayPrice(void);
};

// =========================================================
// SET PRICE FUNCTION
// =========================================================

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no "
         << counter + 1 << endl;

    cin >> itemId[counter];

    cout << "Enter Price of your item" << endl;

    cin >> itemPrice[counter];

    /*
    IMPORTANT CONCEPT:
    counter increases after every item entry
    */

    counter++;
}

// =========================================================
// DISPLAY FUNCTION
// =========================================================

void Shop ::displayPrice(void)
{
    /*
    IMPORTANT CONCEPT:
    Loop runs till counter value
    */

    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id "
             << itemId[i]
             << " is "
             << itemPrice[i]
             << endl;
    }
}

int main()
{
    /*
    IMPORTANT CONCEPT:
    Object creation
    */

    Shop dukaan;

    /*
    IMPORTANT:
    Counter must be initialized before use
    */

    dukaan.initCounter();

    dukaan.setPrice();

    dukaan.setPrice();

    dukaan.setPrice();

    dukaan.displayPrice();

    return 0;
}