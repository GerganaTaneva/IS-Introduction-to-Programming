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

int binaryNum (int number, int countSystem)
{
    int newNumber = 0;
    int copyNum = number;
    while (number != 0)
    {
       newNumber += number % countSystem; // doesn't work for 4 -> 100; 8 -> 1000; numbers in binary, which has more than one '0' at the end
       newNumber *= 10;
       number /= countSystem;
    }
    if (copyNum % 2 != 0)
    {
        return newNumber / 10;
    }
    return newNumber ;
}
void arrayInBinary (int arr[], int range, int countSystem)
{
    for (int i = 0; i < range; i++)
    {
        cout << arr[i] << " -> " << binaryNum(arr[i], countSystem) << endl;
    }
}
int main()
{
    int arr[SIZE];
    int range, countingSystem;
    cout << "Enter the range of the array: ";
    cin >> range;
    cout << "Enter the counting system: ";
    cin >> countingSystem;
    cout << "Number in binary: " << endl;
    init(arr, range);
    arrayInBinary(arr, range, countingSystem);
    return 0;
}
