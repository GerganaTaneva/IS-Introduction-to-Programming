#include <iostream>

using namespace std;

int main()
{
    int number1, number2, number3;
    cout << " Enter three integer numbers: ";
    cin >> number1 >> number2 >> number3;
    if ( number1 == 0 || number2 == 0 || number3 == 0 )
    {
        cout << "0";
    }
    else if ( ( number1 < 0 && number2 < 0 && number3 > 0 ) || ( number2 < 0 && number3 < 0 && number1 > 0 ) || ( number1 < 0 && number3 < 0 && number2 > 0 )  )
    {
        cout << "+";
    }
    else if ( number1 < 0 || number2 < 0 || number3 < 0 )
    {
        cout << "-";
    }
    else if ( number1 > 0 && number2 > 0 && number3 > 0 )
    {
        cout << "+";
    }
    return 0;
}


