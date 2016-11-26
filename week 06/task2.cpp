#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "enter an integer number : ";
    cin >> number;
    int copyNum = number, powNum = number * number;
    cout << "n ^ 2 = " << powNum << endl;
    bool automorphic = true;
    int digA, digB;
    while (copyNum > 0)
    {
        digA = powNum % 10;
        digB = copyNum % 10;
        if (digA != digB)
        {
            automorphic = false;
        }
        copyNum /= 10;
        powNum /= 10;
    }
    cout << (automorphic ? "The number is automorphic! " : "The number is not automorphic! ") << endl;

    return 0;
}
