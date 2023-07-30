#include <iostream>
using namespace std;

int x, y;
int result0, result1, result2, result3, result4;

int main(){
    cin >> x >> y;
    result0 = x+y;
    result1 = x-y;
    result2 = x*y;
    result3 = x/y;
    result4 = x%y;

    cout << result0 << endl;
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    cout << result4 << endl;
    return 0;
}