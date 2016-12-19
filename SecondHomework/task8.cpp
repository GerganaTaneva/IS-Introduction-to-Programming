#include <iostream>

using namespace std;

void init(int* arr, int range)
{
    for(int i = 0; i < range; i++)
    {
        cout << "array [ " << i << " ] = ";
        cin >> arr[i];
    }
}
void sortArr(int* arr, int range)
{
    for(int i = 0; i < range; i++)
    {
        for(int j = 0; j < range - i - 1; j++)
        {
            if(arr[j] <  arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        cout << arr[i];
    }
}

int BinarySearch(int* arr, int range, int key)
{
    int* ptKey = &arr[0];
    int lowerIndex = 0;
    int upperIndex = range - 1;
    int mid = (lowerIndex + upperIndex) / 2;
    while((mid != key))
        {
            mid = (lowerIndex + upperIndex) / 2;
            if(arr[mid] < key)
            {
                lowerIndex = mid - 1;
            }
            else if(arr[mid] > key)
            {
                upperIndex = mid + 1;
            }
        }
        if(lowerIndex >= upperIndex)
        {
            ptKey = &mid;
           return *ptKey;
        }
        return 0;
}
int main()
{
    int arr[100];
    int range;
    cout << "enter size of the array: ";
    cin >> range;
    int key;
    cout << "enter the searching key: ";
    cin >> key;
    init(arr, range);
    sortArr(arr, range);
    cout << BinarySearch(arr, range, key);
    return 0;
}
