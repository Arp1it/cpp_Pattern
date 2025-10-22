#include <iostream>

using namespace std;


int main(){
    int k = 5;

    for (int i = 1; i <= k; i++)
    {
        for (int j = (k-i); j > 0; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            // cout<<(j+1);
            cout<<(j+1)<<" ";
            // cout<<i<<" ";
        }
        cout<<endl;        
    }

    return 0;
}