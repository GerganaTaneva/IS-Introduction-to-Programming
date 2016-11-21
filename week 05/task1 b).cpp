#include <iostream>

using namespace std;

int main()
{
    int weekNumber;
    cout << "Enter a day from the week: ";
    cin >> weekNumber;
    switch (weekNumber)
    {
        case 1: case 2: case 3: case 4: case 5:
            cout << "It's a weekday!" << endl;
            break;
        case 6: case 7:
            cout << "It's a WEEKEND!!!" << endl;
            break;
        default:
            cout << "That is not a number from the week!" << endl;
            break;
    }

    return 0;
}
