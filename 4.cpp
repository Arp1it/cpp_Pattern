#include <iostream>

using namespace std;


int main(){
    int k = 5;
    char a = 'A';

    for (int i = 0; i < k; i++){
        for(int j = 0; j < i+1; j++){
            cout<<a<<" ";
        }
        cout<<endl;
        a += 1;
    }

    return 0;
}