#include <iostream>

using namespace std;

int main()
{
    int number, dig1, dig2, dig3 ;
    cin >> number;
    dig1 = number / 100;
    dig2 = ( number / 10 ) % 10;
    dig3 = number % 10;
    if ( ( dig1 == dig2 ) || ( dig2 == dig3 ) || ( dig1 == dig3 ) )
    {
        cout << " The number has same digits!";

    }
    else
        cout << " The number has no same digits!";

    return 0;
}
