#include <iostream>

using namespace std;

int main()
{
   /* int number1, number2;
    cin >> number1 >> number2;
    if ( (number2 % number1)==0)
       {
           cout << " Number1 e delitel na Number2." << endl;
       }
    else
    {
        cout << "Number1 ne e delitel na Number2." << endl;
       } */
       int number1, number2;
       cin >> number1 >> number2 ;
       int z = ( number2 % number1 ) ;
       cout << ( 0 == z );
    return 0;
}
