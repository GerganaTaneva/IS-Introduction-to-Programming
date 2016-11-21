#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    if ((number / 10000) <= 4)
    {
        for (int i = 0; i <= number; i++)
        {
            sum += i * i;
        }
        cout << "sum: " << sum;
    }
    else
        cout << "Invalid number!" << endl;

    return 0;
}
