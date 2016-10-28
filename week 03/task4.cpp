#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << " Enter an integer x: ";
    cin >> x;
    switch ( x )
    {
        case 1 : cout << " y= " << x - 5 << endl;
        break;
        case 2 : cout << " y= " << sin ( x ) << endl;
        break;
        case 3 : cout << " y= " << cos ( x ) << endl;
        break;
        case 4 : cout << " y= " << exp ( x ) << endl;
        break;
        default : cout << " You have entered invalid number! ";
        break;
    }
    return 0;
}
