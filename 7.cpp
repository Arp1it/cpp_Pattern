#include <iostream>

using namespace std;


int main(){
    int k = 5;

    // for (int i = 1; i <= k; i++){
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<i-j<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < k; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}