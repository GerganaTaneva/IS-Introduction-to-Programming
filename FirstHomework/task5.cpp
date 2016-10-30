#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << " Enter a number: " << endl;
    cin >> number;
    switch ( number )
    {
    case 1: case 2: case 3: cout << number * 10;
    break;
    case 4: case 5: case 6: cout << number * 100;
    break;
    case 7: case 8: case 9: cout << number * 1000;
    break;
    default: cout << " Invalid input! ";
    break;
    }
    return 0;
}
