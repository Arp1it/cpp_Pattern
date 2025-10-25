#include <iostream>

using namespace std;

// #define TRUE 1
// #define FALSE 1

int main()
{
    const int k = 5;
    int co[k][k] = {0};
    int va = 1;
    int t = 0;
    
    for (int i = 0; i < k; i++)
    {
        t = i;
        if (i % 2 == 0)
        {
            t -= i;
            for (int j = i; j >= 0; j--)
            {
                co[t][j] = va;
                va += 1;
                // cout<<t<<endl;
                t += 1;
            }
            t = i;
        }
        else{
           for (int j = 0; j <= i; j++)
            {
                co[t][j] = va;
                va += 1;
                // cout<<t<<endl;
                t -= 1;
            } 
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