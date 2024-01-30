#include <iostream>
using namespace std;

int N, i=1, count=1;

int main(){
    cin >> N;

    while(N > i){
        i = i + (6*count);
        count++;
    }
    cout << count;
    return 0;
}