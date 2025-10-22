#include <iostream>

using namespace std;


int main(){
    int n = 5;
    char k = 'A';
    
    for (int i = 0; i < n; i++)
    {
        // char k = 'A';
        for (int j = 0; j < 4; j++)
        {
            cout<<k<<" ";
            k += 1;
        }
        cout<<endl;
    }
    

    return 0;
}