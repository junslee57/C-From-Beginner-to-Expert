#include <iostream>

using namespace std;
/*reference variables */
int main()
{
    string name_2 = "lala";
    string name = "Agnes";
    
    cout << "Value of Variable: " << name << " address of Variable is: " << &name << endl;
    
    const string & nr_6 = name;
    
    cout << "Value of Variable: " << nr_6 << " address of Variable is " << &nr_6 << endl;
    
    //nr_6 = name_2;
    //nr_6 = "Scott";
    //name = "Scott";
    
    cout << "Value of Variable: " << name << " address of Variable is: " << &name << endl;
    
    cout << "Value of Variable: " << nr_6 << " address of Variable is " << &nr_6 << endl;
    
    /*
        Ref. var. must be initialized when created
        Ref var can't change associations / connections
        Ref var must be the same type as associated variable
     */
    return 0;
}
