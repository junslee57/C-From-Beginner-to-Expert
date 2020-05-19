#include <iostream>

using namespace std;
/* LOOPs */

int main()
{
    /*
        for (initilization; condition; inc/dec)
            instruction-to-reapeat;
     */
    
    for (int i = 0; i < 3; i++)
        cout << i << endl;
    
    cout << "lala" << endl;
    
    int array[100];
    
    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
        cout << array[i] << endl;
    }

}
