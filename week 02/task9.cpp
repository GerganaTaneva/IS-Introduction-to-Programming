#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    int r, r2;
    int centerx = 0, centery = 0;
    int centerx2 = 0, centery2 = 3;
    cout << " Enter two changeables X and Y ";
    cin >> x >> y;
    cout << " Enter radius1 and radius2. ";
    cin >> r >> r2 ;
    if ( ( pow ( ( x - centerx ) , 2 ) + pow ( ( y - centery ) , 2 ) ) <= pow ( r, 2 ) )
    {
        cout << " The dot lays in the circle. ";
    }
    else if ( ( pow ( ( x - centerx2 ) , 2 ) + pow ( ( y - centery2 ) , 2 ) ) <= pow ( r2, 2 ) )
    {
        cout << " The dot lays in the circle. ";
    }
    else
    {
        cout << " The dot is out of the circle. ";
    }
    return 0;
}
