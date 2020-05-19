#include <iostream>

using namespace std;
/* loops - exercises and nested loops */

int main()
{
/*
    int nr = 1234; // 4 digits
    int nrOfDigits = 1;
    
    cout << 1234 / 10 << endl;
    cout << 123 / 10 << endl;
    cout << 12 / 10 << endl;
    cout << 1 / 10 << endl;

    int tmp = nr;
    while (tmp /= 10) //nr = nr / 0, nrOfDigits = 4
        nrOfDigits++;
    
    cout << "the number " << nr << " has " << nrOfDigits << " digits" << endl;
*/
    /*
        1 2 3 4 5  6  7  8  9  10
        2 4 6 8 10 12 14 16 18 20
        3 6 9 12 15 ....
        4 ...
        5 ...
     */
    /*
    for (int i = 1; i <= 10; i++) //amount of rows
    */
    /*
    {
        
        if (i == 5)
            continue; //EVERTHING AFTER continue instruction WONT BE executed BUT LOOP WON't END BECAUSE OF IT
        */
        /*
        if (i == 5)
            break; //EVERYTHING after break WON't be ececuted AND we are LEAVING the ACTUAL LOOP
        */
        /*
        for (int j = 1; j <= 10; j++) //amount of columns
        {
            if (j == 5)
                continue;
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
         */
    
        for (int i = 1, j = 1; i <= 10; i++)
        {
            cout.width(4);
            cout << i * j;
            
            if (i == 10)
            {
                j++;
                i = 0;
                cout << endl;
            }
            
            if (j == 10 + 1)
                break;
        }
        
}
