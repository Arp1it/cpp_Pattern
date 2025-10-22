#include <iostream>

using namespace std;


int main(){
    int k = 5;
    char c = 'A';

    for (int i = 0; i < k; i++)
    {
        c = 'A'+i;
        for (int j = 0; j < i+1; j++)
        {
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
    

    return 0;
}