#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> V;

int main(){
    int N, num;
    int min_num, max_num;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        V.push_back(num);
    }

    max_num = *max_element(V.begin(), V.end());
    min_num = *min_element(V.begin(), V.end());

    cout << min_num << " " << max_num << endl;
    return 0;
}