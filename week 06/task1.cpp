#include <iostream>

using namespace std;

int main()
{
    int n;
    char a, b;
    cout << "number: " << endl;
    cin >> n;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    int countA = 0, countB = 0;
    for (int i = 1; i < n ; i++)
    {
        countA = i;
        countB = n - i;

    while (countA > 0)
    {
        cout << a;
        countA --;
    }
    while (countB > 0)
    {
        cout << b;
        countB --;
    }
    cout << endl;
    }
    return 0;
}
