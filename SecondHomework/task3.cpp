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

void mergeArr(int* arr1, int* arr2, int range1, int range2)
{
    int* arr3;
    int i = 0, j = 0, k = 0;
    while(arr2[j] != 0 && arr1[i] != 0)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
        }
        if(arr2[j] < arr1[i])
        {
            arr3[k] = arr2[j];
        }
        i++;
        j++;
        k++;
        cout << arr3[k] << " ";
    }
}

int main()
{
    int arr1[SIZE], arr2[SIZE];
    int range1, range2;
    cout << "enter range1: ";
    cin >> range1;
    cout << "enter range2: ";
    cin >> range2;
    cout << "first array:" << endl;
    init(arr1, range1);
    cout << "second array:" << endl;
    init(arr2, range2);

    mergeArr(arr1, arr2, range1, range2);

    return 0;
}
