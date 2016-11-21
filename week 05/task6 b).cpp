#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    if ((number / 10000) <= 4)
    {
        for (int i = 0; i <= number - 1; i++)
        {
            cout << i << " " ;
        }
    }

    return 0;
}
