#include <iostream>
using namespace std;

int main(){
    int A, B, result;
    while(!(cin >> A >> B).eof()){
        result = A + B;
        cout << result << "\n";
    }

    return 0;
}