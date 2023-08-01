#include <iostream>
using namespace std;

int N, result;
int main(){
    cin >> N;
    for(int i = 1; i < 10; i++){
        result = N*i;
        cout << N << " " << "*" << " " << i << " " << "=" << " " << result << endl;
    }
    return 0;
}