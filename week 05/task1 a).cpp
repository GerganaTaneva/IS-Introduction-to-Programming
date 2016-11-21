#include <iostream>

using namespace std;

int main()
{
    int season;
    do
    {
        cout << "Enter a number form 1 to 12: " << endl;
        cin >> season;
    }
    while (season < 1 || season > 12 );
    {
        switch (season)
        {
            case 1: case 2: case 3: cout << "Winter! " << endl;
            break;
            case 4: case 5: case 6: cout << "Spring! " << endl;
            break;
            case 7: case 8: case 9: cout << "SUMMER! " << endl;
            break;
            case 10: case 11: case 12: cout << "Autumn! " << endl;
            break;
        }
    }
    return 0;
}
