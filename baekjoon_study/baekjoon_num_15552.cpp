#include <iostream>
using namespace std;

int t, num1, num2, result;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> num1 >> num2;
        result = num1 + num2;
        cout << result << "\n";
    }

    return 0;
}