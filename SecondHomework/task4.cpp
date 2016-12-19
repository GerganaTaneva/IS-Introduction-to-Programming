#include <iostream>

using namespace std;

const int ROWS = 100;
const int COLUMNS = 100;

void init(int (*arr1)[COLUMNS], int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << "array[ " << i + 1 << " ][ " << j + 1 << " ] = ";
            cin >> arr1[i][j];
        }
    }
}
// workingbut without pointers!!
void transpose(int (*arr1)[COLUMNS], int rows, int columns)
{
    int arr2[ROWS][COLUMNS];
    for(int i = 0; i < columns; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            arr2[i][j] = arr1[j][i];
            cout << arr2[i][j] << " ";
        }
    }
}
int main()
{
    int arr1[ROWS][COLUMNS];
    int rows, columns;
    cout << "enter rows: ";
    cin >> rows;
    cout << "enter columns: ";
    cin >> columns;

    init(arr1, rows, columns);

    transpose(arr1, rows, columns);
    return 0;
}
