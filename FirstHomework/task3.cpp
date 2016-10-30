#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    cout << " Enter two integer numbers: " << endl;
    cin >> number1 >> number2;
    cout << ( ( number1 + number2 ) % 2 == 0 ? ( number1 + number2 ) * 2 : ( number1 + number2 ) / 2 );
    return 0;
}
