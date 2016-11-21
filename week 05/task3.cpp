#include <iostream>

using namespace std;

int main()
{
    char choice;
    cout << "Enter a number or a symbol: " << endl;
    cin >> choice;
    if (choice >= 48 && choice <= 57 )
    {
        cout << (int)choice;
        cout << "Your choice is a number and its square is: " << (int)choice * (int)choice << endl;
    }
    else if ( (choice > 33 && choice < 47) || (choice >= 58 && choice <= 126) )
    {
        cout << "Your choice is a symbol!: " << choice << endl;
    }
    return 0;
}
