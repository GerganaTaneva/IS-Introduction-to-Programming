#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number ;
    bool reminder = ( number % 2 == 0) && ( number % 3 == 0) && ( number % 5 != 0) ;
    cout << reminder ;

    return 0;
}
