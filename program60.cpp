#include<iostream>
#include<fstream>

using namespace std;

// =========================================================
// FILE HANDLING IN C++
// =========================================================

/*
IMPORTANT CONCEPT:

The useful classes for working with files in C++ are:

1. fstreambase
2. ifstream  --> derived from fstreambase
3. ofstream  --> derived from fstreambase
*/

// =========================================================
// FILE OPENING METHODS
// =========================================================

/*
IMPORTANT CONCEPT:

In order to work with files in C++,
you have to open them.

There are 2 ways to open a file:

1. Using constructor
2. Using open() member function
*/

int main(){

    // =========================================================
    // STRING VARIABLES
    // =========================================================

    string st = "Aditya Bhai";

    string st2;

    // =========================================================
    // WRITING INTO A FILE
    // =========================================================

    /*
    IMPORTANT CONCEPT:

    ofstream is used for writing files
    */

    ofstream out("sample60.txt");

    // Write operation

    out << st;

    // =========================================================
    // READING FROM A FILE
    // =========================================================

    /*
    IMPORTANT CONCEPT:

    ifstream is used for reading files
    */

    // ifstream in("sample60b.txt");

    // =========================================================
    // FILE READING METHODS
    // =========================================================

    /*
    IMPORTANT CONCEPT:

    in >> st2;
    reads only one word
    */

    // in >> st2;

    /*
    IMPORTANT CONCEPT:

    getline() reads complete line
    from file
    */

    // getline(in, st2);

    // cout << st2;

    return 0;
}
