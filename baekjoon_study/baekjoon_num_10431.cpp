#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> vec(20);

int main(){
    cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
    int P, result = 0, number;
    cin >> P;

    for(int i = 0; i < P; i++){
        cin >> number;
        result = 0;
        for(int i = 0; i < 20; i++){
            cin >> vec[i];
        }
        for(int i = 0; i < 20; i++){
            for(int j = i; j < 20; j++){
                if(vec[i] > vec[j]){
                    result++;
                }
            }
        }
        cout << number << ' ' << result << "\n";
    }
    return 0;
}
