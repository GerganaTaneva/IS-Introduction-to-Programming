#include <iostream>

using namespace std;

const int COLUMN = 100;
const int ROW = 100;

void init (int arr[][COLUMN], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "array [ " << i << " ][ " << j << " ] = ";
            cin >> arr[i][j];
        }
    }
}
bool findOdds (int number)
{
    if (number % 2 != 0)
    {
        return true;
    }
    else return false;
}
bool findPrimes (int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else return false;
}
void primeOddNumInRows(int arr[][COLUMN], int row, int column)
{
    int countPrime = 0, countOdd = 0;// countPrimeColumn = 0, countOddColumn = 0;
    for (int i = 0; i < row; i++)
    {
        countPrime = 0; countOdd = 0;
        for (int j = 0; j < column; j++)
        {
            if(findPrimes(arr[i][j]))
              countPrime++;
            if(findOdds(arr[i][j]))
                countOdd++;
        }
        cout << "prime in row(column): " << i << " = " << countPrime << " odd in row(column): " << i << " = " << countOdd << endl;
    }
}
int main()
{
    int arr [ROW][COLUMN];
    int rows, columns;
    cout << "enter rows: ";
    cin >> rows;
    cout << "enter columns: ";
    cin >> columns;
    init(arr, rows, columns);
    cout << "prime/odd in rows: " << endl;
    primeOddNumInRows(arr, rows, columns);
    cout << "prime/odd in columns: " << endl;
    primeOddNumInRows(arr, columns, rows);
    return 0;
}
