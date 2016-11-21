#include <iostream>

using namespace std;

int main()
{
    int number;
    do
    {
        cout << "Enter a number from 5 to 20: " << endl;
        cin >> number;
    }
    while (number < 5 || number > 20);
    {
        switch ( number )
        {
            case 6: case 8: case 10: case 12: case 14: case 16: case 18: case 20:
            cout << "It's an even number! " << endl;
            break;
            case 5: case 7: case 9: case 11: case 13: case 15: case 17: case 19:
            {

               for (int i = 2; i <= number / 2; i++)
               {
                   if (number % i == 0)
                    {
                        cout << "It's an odd and simple number!" << endl;
                        break;
                    }
                    else
                    {
                        cout << "It's an odd and not simple number!" << endl;
                        break;
                    }
                }
            }
            break;
        }
    }
    return 0;
}
