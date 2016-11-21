#include <iostream>

using namespace std;

int main()
{
    double number, sum = 0;
    do
    {
        cout << "Enter a number:" << endl;
        cin >> number;
        sum += number;
    }
    while (sum <= 100);
    {
        cout << "sum: " << sum << endl;
    }

    return 0;
}
