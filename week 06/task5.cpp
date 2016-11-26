#include <iostream>

using namespace std;

int main()
{
    int dig1 = 1;
    int dig2 = 0, dig3 = 0;
    while (dig1 != 10)
    {
        if (dig1 != dig2 && dig1 != dig3 && dig2 != dig3)
        {
            cout << dig1 << dig2 << dig3 << " ";
        }
        if (dig2 == 9 && dig3 == 9)
        {
            dig2 = 0;
            dig3 = 0;
            dig1++;
        }
        if (dig3 == 9)
        {
            dig3 = 0;
            dig2++;
        }
        dig3++;
    }

    return 0;
}
