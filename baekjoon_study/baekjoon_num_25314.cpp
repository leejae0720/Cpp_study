#include <iostream>
using namespace std;

int N;
int A;
int main(){
    cin >> N;
    A = N / 4;
    for (int i = 0; i < A; i++){
        cout << "long" << " ";
    }

    cout << "int" << endl;
    return 0;
}