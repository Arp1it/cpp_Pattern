#include <iostream>

using namespace std;


int main(){
    int k = 5;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        
        for (int j = (k-i); j > 0; j--)
        {
            cout<<(i+1);
            // cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}