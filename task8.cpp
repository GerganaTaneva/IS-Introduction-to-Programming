#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << " Enter x and y. ";
    cin >> x >> y;
    if ( ( x == 0 ) && ( y == 0 ) )

        {
            cout << " The dot lays on the center of the coordinate system. ";
        }
    else if ( ( x == 0 ) && ( y != 0 ) )
        {
            cout << " The dot lays on the straight line Oy. ";
        }
    else if ( ( x!= 0 ) && ( y == 0 ) )
        {
            cout << " The dot lays on the straight line Ox. ";
        }
    else if ( ( x > 0 ) && ( y > 0 ) )
            cout << " The dot lays in FIRST quadrant. ";
    else if ( ( x < 0 ) && ( y > 0 ) )
            cout << " The dot lays in SECOND quadrant.";
    else if ( ( x < 0 ) && ( y < 0 ) )
            cout << " The dot lays in THIRD quadrant. ";
    else
            cout << " The dot lays in FOURTH quadrant. ";

    return 0;
}
