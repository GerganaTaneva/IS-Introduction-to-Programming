#include <iostream>

using namespace std;

int main()
{
    int positiveNum;
    cout << "enter an integer number : ";
    cin >> positiveNum;
    bool inInterval = false;
    for (int i = 3; i <= 7 && !inInterval; i++)
    {
            if (positiveNum % 10 == i)
            {
                inInterval = true;
                positiveNum /= 10;
            }
    }
    cout << (inInterval ? "the digits of the number are in the interval" : "the digits of the number are not in the interval") << endl;
    return 0;
}
