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
bool isDeletedElem(int* arr, int range, int n)
{
    int copyRange = range;
    int counter = 0;
    for(int i = 0; i < range; i++)
    {
        if(arr[i] == n)
        {
            arr[i] = arr[i + 1];
            counter++;
        }
    }
    range -= counter;
    if(copyRange > range)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[100];
    int range, elem;
    cout << "enter range: ";
    cin >> range;
    cout << "enter searching element: ";
    cin >> elem;
    init(arr, range);
    cout << "is there an element " << elem << " in the array (yes - 1/no - 0): " << isDeletedElem(arr, range, elem) << endl;
    return 0;
}
