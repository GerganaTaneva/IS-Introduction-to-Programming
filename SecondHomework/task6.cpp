#include <iostream>

using namespace std;

const int SIZE = 100;

void init(double* arr, int range)
{
    for(int i = 0; i < range; i++)
    {
        cout << "array[ " << i << " ] = ";
        cin >> arr[i];
    }
}
double average(int number1, int number2)
{
    return (number1 + number2) /  2;
}

int findIndex(double* arr, int range)
{
    int reminder = 0;
    if(arr[0] == arr[1])
    {
        reminder = 1;
    }
    if(arr[range - 2] == arr[range - 1])
    {
        reminder = range - 1;
    }
    for(int i = 0; i < range - 2; i++)
    {
        if(average(arr[i], arr[i + 2]) == arr[i + 1])
        {
            reminder = i + 1;
        }
    }
    return (reminder != 0 ? reminder : -1);
}
int main()
{
    double arr[SIZE];
    int range;
    cout << "enter size of the array: ";
    cin >> range;
    init(arr, range);
    cout <<"searching index = " << findIndex(arr, range);
    return 0;
}
