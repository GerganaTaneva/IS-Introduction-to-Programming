#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
        cout << " Enter a first changeable a: ";
        cin >> a;
        cout << " Enter a second changeable b: ";
        cin >> b;
        cout << " Enter a third changeable c: ";
        cin >> c;
    double D;
        D = pow ( b, 2 ) - ( 4 * a * c );
    double x1, x2;
    if ( a == 0 )
    {
        if ( b == 0 )
        {
           if ( c == 0 )
           {
               cout << " Every X is a solution of the equation!";
           }
           else
           {
               cout << " The equation has NO roots!";
           }
        }
        else
        {
            x1 = -c / b;
            cout << " The equation has one answer. x= " << x1 << endl;
        }
    }
    else

    {
        if ( D == 0)
            {
                cout << " The equation has one double root. x1 = x2 = " << -b / 2 * a;

            }
        else if ( D < 0 )
                {
                    cout << " There is no answer to the equation. ";
                }
        else
                {
                    x1 =  ( - b + sqrt ( D ) ) / 2 * a;
                    x2 = ( - b - sqrt ( D ) ) / 2 * a;
                    cout << " The equation has two roots. x1 = " << x1 << endl << " and x2 = " << x2 << endl;

                }
    }
    return 0;
}
