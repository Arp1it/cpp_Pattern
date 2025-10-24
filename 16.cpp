#include <iostream>

using namespace std;

int main()
{
    int k = 10;

    for (int i = 0; i < (2 * k) - 1; i++)
    {
        if (i < k)
        {
            if (i == 0)
            {
                for (int j = 1; j < k; j++)
                {
                    cout << " ";
                }
                cout << "*" << endl;
            }

            else
            {
                for (int j = 1; j <= k - i - 1; j++)
                {
                    cout << " ";
                }
                cout << "*";

                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << " ";
                }

                cout << "*" << endl;
            }
        }

        else
        {
            for (int j = 0; j <= (i - k); j++)
            {
                cout << " ";
            }
            cout << "*";

            for (int j = 1; j <= 2*(k-(i - k + 1)-1)-1; j++)
            {
                cout << " ";
            }
            if ((2*k)-1 != i+1)
            {
                cout << "*" << endl;
            }
        }
    }

    return 0;
}