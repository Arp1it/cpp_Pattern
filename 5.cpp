#include <iostream>

using namespace std;


int main(){
    int k = 5;

    for(int i = 0; i < k; i++){
        for(int j = 1; j <= i+1; j++){
            // cout<<j+1<<" ";
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}