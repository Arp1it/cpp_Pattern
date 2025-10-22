#include <iostream>

using namespace std;


int main(){
    int k = 5;
    int t = 1;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<t<<" ";
            t += 1;
        }
        cout<<endl;
    }
    

    return 0;
}