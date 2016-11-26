#include <iostream>

using namespace std;

int main()
{
    int number,lastNum, minNum = 99999, maxNum = -99999, counter = 1;
    cout << "Enter a number: ";
    cin >> number;
    lastNum = number;
    while (counter < 3);
    {
        cout << "Enter a number: ";
        cin >> number;
        if (number == lastNum)
        {
            counter++;
        }
        else
            counter = 1;
        if (number < minNum)
        {
            minNum = number;
        }
        if (number > maxNum)
        {
            maxNum = number;
        }
        lastNum = number;
    }

    cout << "min number = " << minNum << " max number = " << maxNum << endl;
    return 0;
}
