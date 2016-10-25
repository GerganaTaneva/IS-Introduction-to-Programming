#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d, h, r;
    int figure;
    cin >> figure;
    switch ( figure )
    {
        case 1 : cout << " Enter a, b, c, h " << endl;
                 cin >> a >> b >> c >> h;
                 cout << " Triangle : P = " << a + b + c << endl;
                 cout << " S = " << a * h / 2;
                 break;
        case 2 : cout << " Enter a " << endl;
                 cin >> a;
                 cout << " Square : P = " << 4 * a << endl;
                 cout << " S = " << a * a;
                 break;
        case 3 : cout << " Enter r " << endl;
                 cin >> r;
                 cout << " Circle : P = " << 2 * 3.14 * r  << endl;
                 cout << " S = " << 3.14 * r * r;
                 break;
        case 4 : cout << " Enter a, b " << endl;
                 cin >> a >> b;
                 cout << " Rectangle : P = " << 2 * a + 2 * b << endl;
                 cout << " S = " << a * b;
                 break;
        case 5 : cout << " Enter a, b, c, d, h " << endl;
                 cin >> a >> b >> c >> d >> h;
                 cout << " Trapezoid: P = " << a + b + c + d << endl;
                 cout << " S = " << ( a + b ) * h / 2;
                 break;
        default :
                 break;
    }
    return 0;
}
