#include <iostream>

using namespace std;

int main()
{
    char x = 'd';
    /*
        4.1341234123412341234888888
        4.1341234123412341234555555
    */
    switch (x)
    {
        case 'd':
            cout << "this is a place for the instructions that will be executed when switched value is equal to 0" << endl;
            break;
        case 25:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 25" << endl;
            break;
        case 50:
            cout << "this is a place for the instructions that will be executed when switched value is equal to 50" << endl;
            break;
        default:
            cout << "this is a place for the instructions that will be executed when value of switched variable is not equal to any case" << endl;
    }
}
