#include <iostream>

using namespace std;

int main()
{
    int number, digs1 , digs2;
    cout << " Enter a 6 digit number. ";
    cin >> number;
    digs1 = number / 1000;
    digs2 = number % 1000;
    bool reminder = digs1 < digs2;
    cout << reminder;
    return 0;
}
