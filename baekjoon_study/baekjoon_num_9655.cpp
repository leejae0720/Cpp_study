#include <iostream>

using namespace std;
string a, b;

int main(){
    cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
    a = "SK"; b = "CY";
    int N;
    cin >> N;

    if((N%2) == 0){
        cout << b << endl;
    }
    else{
        cout << a << endl;
    }
    
    return 0;
}