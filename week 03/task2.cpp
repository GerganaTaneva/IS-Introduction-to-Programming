#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << " Enter an integer number: ";
    cin >> number;
    int devider = 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;
    cout << ( number % devider == 0 ? " Yes " : " No " ) << endl;
    return 0;
}
