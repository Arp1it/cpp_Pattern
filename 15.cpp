#include <iostream>

using namespace std;


int main(){
    int k = 5;

    for (int i = 0; i < k; i++)
    {
        for (int j = ((k-i)-1); j > 0; j--)
        {
            cout<<"  ";
        }

        for (int j = 1; j <= i+1; j++)
        {
            cout<<j<<" ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        
        
        cout<<endl;
    }
    

    return 0;
}