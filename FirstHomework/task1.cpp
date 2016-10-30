#include <iostream>

using namespace std;

int main()
{
    int number1, number2, number3, number4, number5, maxElement = -9999;
    cout << " Enter FIVE integer numbers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    if ( number1 > maxElement )
    {
        maxElement = number1;
    }
    if ( number2 > maxElement )
    {
        maxElement = number2;
    }
    if ( number3 > maxElement )
    {
        maxElement = number3;
    }
    if ( number4 > maxElement )
    {
        maxElement = number4;
    }
    if ( number5 > maxElement )
    {
        maxElement = number5;
    }
    cout << maxElement;
    return 0;
}
