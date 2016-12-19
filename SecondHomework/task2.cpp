#include <iostream>

using namespace std;

const int SIZE = 100;

void init(int* arr, int range)
{
    for(int i = 0; i < range; i++)
    {
        cout << "array[ " << i << " ] = ";
        cin >> arr[i];
    }
}

void reverseArr(int* arr, int range)
{
    for(int i = range; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[SIZE];
    int range;
    cout << "enter the size of the array: ";
    cin >> range;

    init(arr, range);

    cout << "reversed array:" << endl;
    reverseArr(arr, range);

    return 0;
}
