#include <iostream>

using namespace std;

int main ()
{
    /*
        AND conjuction &&
     
        7 > 5 && 5 != 10 //conjunction is true ONLY if both expressions are true
     
        expr1 expr2 result
          0    0      0
          0    1      0
          1    0      0
          1    1      1
     
        Or disjuction || (alternative)
        expr1 expr2 result
          0    0      0
          0    1      1
          1    0      1
          1    1      1
     
        ! (exclemation mark)
     
        ! (0) the result will be 1
        ! (1) the result will be 0
     */
    
    cout << !(5 >7 || 5 == 10) << endl;
}
