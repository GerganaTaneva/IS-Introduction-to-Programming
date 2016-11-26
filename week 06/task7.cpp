#include <iostream>

using namespace std;

int main()
{
    int k,n;
    cout << "enter n and k : ";
    cin >> n >> k;
    double combination = 1;
    while (n < 0 || k < 0 || k >= n)
    {
        cout << "enter n and k : ";
        cin >> n >> k;
    }
        long nFact = 1 , kFact = 1, nkFact = 1;
        for (int i = n; i > 1; i--)
        {
            nFact *= i;
        }
        for (int j = k; j > 1; j--)
        {
            kFact *= j;
        }
        for (int p = (n - k); p > 1; p--)
        {
            nkFact *= p;
        }
        combination = nFact / (kFact * nkFact);

    cout << "n above k = " << combination << endl;
    return 0;
}
