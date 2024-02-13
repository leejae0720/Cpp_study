#include <iostream>
using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int input;

    bool array[31] = {0, };
    for(int i = 1; i <= 28; i++){
        cin >> input;
        array[input] = 1;
    }

    for(int j = 1; j <= 30; j++){
        if(array[j]==0){
            cout << j << endl;
        }
    }
    return 0;
}