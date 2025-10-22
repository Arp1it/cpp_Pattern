#include <iostream>

using namespace std;


int main(){
    int k = 5;
    
    for (int i = 1; i <= k; i++)
    {
        for (int j = k-(i-1); j > 0; j--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}