#include <iostream>

using namespace std;


int main(){
    int k = 5;

    for (int i = k; i > 0; i--)
    {
        for (int j = 0; j < k-i; j++)
        {
            cout<<" ";
        }
        cout<<i<<endl;
    }
    

    return 0;
}