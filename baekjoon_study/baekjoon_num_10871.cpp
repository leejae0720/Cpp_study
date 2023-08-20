#include <iostream>
#include <vector>

using namespace std;
int N, X, input, output;
vector <int> V;
vector <int> V2;

int main(){
    cin >> N >> X;
    
    for(int i = 0; i < N; i ++){
        cin >> input;
        V.push_back(input);
    }

    for(int j = 0; j < N; j++){
        if(V[j] < X){
            V2.push_back(V[j]);
            output++;
        }
    }

    for(int k = 0; k < output; k++){
        cout << V2[k] << " ";
    }
}