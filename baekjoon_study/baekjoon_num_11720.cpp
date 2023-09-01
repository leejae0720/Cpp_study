#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

vector <int> V;
int main(){
    int N, input_num;
    char input;
    int result = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> input;
        input_num = input - 48;
        V.push_back(input_num);
    }

    result = accumulate(V.begin(), V.end(), 0);
    cout << result << endl;

    return 0;
}