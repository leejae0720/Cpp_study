#include <iostream>
using namespace std;

int X, N, a, b;
int result = 0, old_result = 0;
int main(){
    cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

    cin >> X >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;
        old_result = a*b;
        result = result + old_result;
    }

    if(result == X){
        cout << "Yes" << "\n";
    }
    
    else{
        cout << "No" << "\n";
    }

    return 0;
}