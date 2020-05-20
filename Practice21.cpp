#include <iostream>

using namespace std;
/* functions / methods */
//parameter

void welcome(); //declaration of function, procedure
bool isNumber(string);
void enterName();
double add(double a, double b) {return a + b;}
void changeValueTo(int x)
{
    x = 10;
}


int main()
{
    // welcome();
    /*
     enterName();
     enterName();
     enterName();
     */
    char ch;
    cout << "Do you want to end the program (Y/N)" << endl;
    
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
        return 1;
    // cout << add(4,5);
    int a = 5;
    
    changeValueTo(a);
    
    cout << a;
    
    return 0;
}

void welcome()
{
    cout << "Hello, welcome in my program!! :-" << endl;
}

bool isNumber(string tmp)
{
    if (tmp[0] == '0')
        return false;
    for (int i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
        {
            return false;
        }
    }
    
    /*
    string 값으로 들어와서 아무리 길게써도 낱개로 쪼개지고
    
    그럼 48~57 (0~9) 안에 다 걸려서
    
    숫자 입력하면 무조건 true 값 출력
    */

    
    return true;
}

void enterName()
{
    string tmp;
    
    cout << "Enter the number: " << endl;
    cin >> tmp; //124k
    
    if (isNumber(tmp))
        cout << "Number entered properly " << endl;
    else
        cout << "Number wasn't entered properly " << endl;
}
