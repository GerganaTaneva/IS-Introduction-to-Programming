#include <iostream>

using namespace std;

int main()
{
    double number, sum = 0;
    do
    {
        cout << "Enter a number:" << endl;
        cin >> number;
        if (sum <= 100)
        {
            sum += number;
        }
        else
        {
            cout << "sum: " << sum << endl;
            break;
        }
    }
    while (number <= 30 && sum <= 100);
    {
        cout << "sum: " << sum - number << endl;
    }
    return 0;
}
