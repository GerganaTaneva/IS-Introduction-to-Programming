#include <iostream>

using namespace std;

int main()
{
    int positiveNum;
    cout << "Enter a positive number : " << endl;
    cin >> positiveNum;
    bool isPrimeDigit = false;
    int lastDigit;
    while (positiveNum > 0)
    {
        isPrimeDigit = false;
        lastDigit = positiveNum % 10;
        for (int i = 2; i < lastDigit; i++)
        {
            if (lastDigit % i == 0)
            {
                break;
            }
            if (i == lastDigit - 1)
            {
                isPrimeDigit = true;
            }
        }
        if (isPrimeDigit)
        {
            break;
        }
        positiveNum /= 10;
    }
    cout <<(isPrimeDigit ? "there is a prime digit in the number!" : "there is no prime digit in the number!") << endl;

    return 0;
}
