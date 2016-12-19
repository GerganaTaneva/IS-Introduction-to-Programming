#include <iostream>

using namespace std;

void swapNum(int *num1, int *num2)
{
    int c = *num1;
    *num1 = *num2;
    *num2 = c;
}

int main()
{
    int number, number2;
    cout << "Enter two integer numbers: ";
    cin >> number >> number2;
    swapNum(&number, &number2);
    cout << "number1 = " << number << endl;
    cout << "number2 = " << number2 << endl;
    return 0;
}
