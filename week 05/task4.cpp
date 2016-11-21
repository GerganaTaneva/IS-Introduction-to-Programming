#include <iostream>

using namespace std;

int main()
{
    char symbol, chosensymbol;
    do
    {
        cout << "Enter a symbol: " << endl;
        cin >> symbol;
        cout << "Enter a searching symbol: " << endl;
        cin >> chosensymbol;
        if ((symbol >= 33 && symbol <= 47) || (symbol >= 58 && symbol <= 64) || (symbol >= 91 && symbol <= 96) || (symbol >= 123 && symbol <= 126))
        {
        cout << "Enter a symbol: " << endl;
        cin >> symbol;
        cout << "Enter a searching symbol: " << endl;
        cin >> chosensymbol;
        }
    }
    while (symbol != chosensymbol);
    {
        if (symbol == chosensymbol)
        cout << "Yes!" << endl;
    }

    return 0;
}
