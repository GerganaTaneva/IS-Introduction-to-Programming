#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    int bulls = 0, cows = 0;
    int rndNum1, rndNum2, rndNum3, rndNum4;
    int number1, number2, number3, number4;
    cout << "Hello in the game Cows and Bulls! Get ready to start!" << endl;

    srand ( time ( NULL ) );
    bool flag = 0;
    while ( !flag )
    {
        rndNum1 = rand () % 9 + 1;
        rndNum2 = rand () % 9 + 1;
        rndNum3 = rand () % 9 + 1;
        rndNum4 = rand () % 9 + 1;
        if ( rndNum1 != rndNum2 && rndNum2 != rndNum3 && rndNum4 != rndNum1 && rndNum1 != rndNum3 && rndNum2 != rndNum4 && rndNum3 != rndNum4 )
        {
            flag = 1;
        }
    }

    for (int i = 0; i <= 10; i++ )
    {
        bulls = 0;
        cows = 0;
        cout << "Enter 4 digits! GOOD LUCK! " << endl;
        cin >> number1 >> number2 >> number3 >> number4;
        if ( number1 == rndNum1 )
        bulls++;
        if ( ( number1 == rndNum2 ) || ( number1 == rndNum3 ) || ( number1 == rndNum4 ) )
        cows++;
        if ( number2 == rndNum2 )
        bulls++;
        if ( ( number2 == rndNum1 ) || ( number2 == rndNum3 ) || ( number2 == rndNum4 ) )
        cows++;
        if ( number3 == rndNum3 )
        bulls++;
        if ( ( number3 == rndNum1 ) || ( number3 == rndNum2 ) || ( number3 == rndNum4 ) )
        cows++;
        if ( number4 == rndNum4 )
        bulls++;
        if ( ( number4 == rndNum1 ) || ( number4 == rndNum2 ) || ( number4 == number3 ) )
        cows++;
        if ( bulls == 4 )
        {
            cout << "Congratulations you have WON the game!" << endl;
            break;
        }
        else
        cout << "Bulls = " << bulls << " Cows = " << cows << endl;
    }
    return 0;
}
