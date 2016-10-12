#include <iostream>

using namespace std;

int main()
{
    int number, dig1, dig2, dig3;
    bool reminder;
    cin >> number;
    dig3 = number % 10;
    dig2 = ( number / 10 ) % 10;
    dig1 = number / 100;
    reminder = ( dig1 < dig2 ) && ( dig2 < dig3 ) && ( dig1 < dig3 );
    cout << reminder;

    return 0;
}
