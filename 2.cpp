#include <iostream>

using namespace std;


int main(){
    // int n = 1;
    int k = 5;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            // cout<<n<<" ";
            cout<<(i+1)<<" ";
        }
        cout<<endl;
        // n += 1;
    }
    

    return 0;
}