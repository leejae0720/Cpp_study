#include <iostream>
using namespace std;

int N;
int main(){
    cin >> N;
    int A, B, result;
    for(int i = 0; i < N; i++){
        cin >> A >> B;
        result = A + B;
        cout << result << endl;
    }
    return 0;
}