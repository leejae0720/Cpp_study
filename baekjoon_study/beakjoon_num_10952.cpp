#include <iostream>

using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int A, B, result;
    while(1){
        cin >> A >> B;
        if(A == 0 && B == 0){
            break;
        }
        result = A + B;
        cout << result << endl;
    }

    return 0;
} 