#include <iostream>
#include <vector>

using namespace std;
int N, v, input, output;
vector <int> V;

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> v;
        V.push_back(v);
    }

    cin >> input;
    for(int j = 0; j < N; j++){
        if(V[j] == input){
            output++;
        }
    }
    cout << output << endl;
}