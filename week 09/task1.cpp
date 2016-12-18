#include <iostream>

using namespace std;

const int SIZE = 100;

void input (int arr[], int range)
{
    for (int i = 0; i < range; i++)
    {
        cout << "Enter element [ " << i << " ] = ";
        cin >> arr[i];
    }
}

void switchArray (int arr[], int range)
{
    for (int i = range - 1; i >= 0; i--) // for(int i = 0; i < range / 2; i ++)
    {
//        int temp = arr[i];
//        arr[i] = arr[range - 1 - i];
//        arr[range - 1 - i] = temp;
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[SIZE];
    int numElem;
    cout << "number elements : ";
    cin >> numElem;
    input(arr, numElem);
    switchArray(arr,numElem);
    return 0;
}
