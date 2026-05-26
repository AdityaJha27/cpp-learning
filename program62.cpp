#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // ofstream out;
    // out.open("sample60.txt");
    // out<<"This is me"<<endl;
    // out<<"This is me again"<<endl;
    // out.close();

    ifstream in;
    string st, st2;
    in.open("sample60.txt");
    // in>>st;
    // cout<<st;
    // in>>st2;
    // cout<<st2;

    while(in.eof() == 0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}