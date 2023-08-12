#include <iostream>
#include <vector>
using namespace std;

int N;

int main(){
    cin >> N;
    vector<int> Card;
    int array_num, return_num = 0;

    if(N<3 && N>0){
        for(int i = 0; i < N; i++){
            Card.push_back(i+1);
        }

        cout << Card[N-1] << endl;
    }
    else if(N>=3 && N<= 500000){
        for(int i = 0; i < 2*N-2; i++){
            Card.push_back(i+1);
        }
        
        for(int j = 0, k = 1; j < N-2; k+=2 ,j++){
            return_num = Card[k];
            Card[N+j]=return_num;
        }

        cout << Card[2*N-3] << endl;
    }
    else{
        cout << "number insert error" << endl;
    }

    return 0;
}