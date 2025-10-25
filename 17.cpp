#include <iostream>

using namespace std;

// #define TRUE 1
// #define FALSE 1

int main()
{
    const int k = 4;
    int co[k][k] = {0};
    int va = 1;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            co[i][j] = va;
            va += 1;
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ", co[i][j]);
        }
        printf("\n");
    }

    return 0;
}