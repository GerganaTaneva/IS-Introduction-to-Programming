#include <iostream>

using namespace std;

const int SIZE = 100;

void init (int arr[], int range)
{
    for (int i = 0; i < range; i++)
    {
        cout << "element [ " << i << " ] = ";
        cin >> arr[i];
    }
}

int fact (int number)
{
    int fact = 1;// 5
    while(number != 1)
    {
        fact *= number;
        number--;
    }
    return fact;
}

void arrFact (int arr[], int range)
{
    for (int i = 0; i < range; i++)
    {
        cout << arr[i] << "! = " << fact(arr[i]) << endl;
    }
}
int main()
{
    int arr[SIZE];
    int range;
    cout << "elements = ";
    cin >> range;
    init(arr, range);
    arrFact(arr, range);

    return 0;
}
