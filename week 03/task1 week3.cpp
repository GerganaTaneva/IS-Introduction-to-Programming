#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    char symbol;
    cin >> number1 >> number2 >> symbol;
    switch ( symbol )
    {
        case '+' :  cout << " number1 + number2 = " << number1 + number2;
                      break;

        case '-' :  cout << " number1 - number2 = " << number1 - number2;
                      break;

        case '/' :  cout << " number1 / number2 = " << number1 / number2;
                      break;

        case '*' :  cout << " number1 * number2 = " << number1 * number2;
                      break;

        case '%' :  cout << " number1 % number2 = " << number1 % number2;
                      break;

        default :     cout << " This opertion is invalid! ";
                      break;
    }
    return 0;
}
