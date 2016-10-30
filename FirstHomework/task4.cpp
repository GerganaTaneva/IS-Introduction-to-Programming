#include <iostream>

using namespace std;

int main()
{
    int number1, number2, biggerPositiveNum = 0;
    cout << " Enter two numbers: " << endl;
    cin >> number1 >> number2;
    biggerPositiveNum = ( number1 > number2 ? number1 : number2 );
    cout << ( biggerPositiveNum < 0 ? biggerPositiveNum * ( -1 ) : biggerPositiveNum );
    return 0;
}
