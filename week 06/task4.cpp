#include <iostream>

using namespace std;

int main()
{
    int positiveNum1, positiveNum2, sumDevisors1 = 0, sumDevisors2 = 0;
    cout << "Enter two positive numbers: " << endl;
    cin >> positiveNum1 >> positiveNum2;
    for (int i = 1; i < positiveNum1; i++)
    {
        if (positiveNum1 % i == 0)
        {
            sumDevisors1 += i;
        }
    }
    for (int j = 1; j < positiveNum2; j++)
    {
        if (positiveNum2 % j == 0)
        {
            sumDevisors2 += j;
        }
    }
    if ((sumDevisors1 == positiveNum2) && (sumDevisors2 == positiveNum1))
    {
        cout << "Friendly numbers!" << endl;
    }
    else
        cout << "not friendly numbers!" << endl;

    return 0;
}
