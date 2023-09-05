#include <iostream>
#include <vector>
using namespace std;

vector <int> V;

int main(){
    int n;
    int max_num=0, num = 0;
    for(int i = 0; i < 9; i++){
        cin >> n;
        V.push_back(n);

    }

    for(int j = 0; j < 9; j++){
        if(V[j] > max_num){
            max_num = V[j];
            num = j+1;
        }
    }

    cout << max_num << endl;
    cout << num << endl;
    return 0;
}