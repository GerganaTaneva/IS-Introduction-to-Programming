#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, r;
    cout << " Enter x and y. ";
    cin >> x >> y;
    r = sqrt ( pow ( x, 2 ) + pow ( y, 2 ) );
    if ( r < 5 )
    {
        cout << " The dot lays in the circle. ";
    }
    else
    {
        cout << " The dot is out of the circle. ";
    }
    return 0;
}
