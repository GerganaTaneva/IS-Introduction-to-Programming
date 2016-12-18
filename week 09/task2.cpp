#include <iostream>

using namespace std;

const int SIZE = 100;

void input (int arr[], int range)
{
    for (int i = 0; i < range; i++)
    {
        cout << "element [ " << i << " ] = ";
        cin >> arr[i];
    }
}
void evenOddElem (int arr[], int range)
{
    int even = 0, odd = 0;
    for (int i = 0; i < range; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "even numbers = " << even << " odd numbers = " << odd << endl;
}
int main()
{
    int arr[SIZE];
    int range;
    cout << "enter number elements : ";
    cin >> range;
    input(arr, range);
    evenOddElem(arr, range);

    return 0;
}
