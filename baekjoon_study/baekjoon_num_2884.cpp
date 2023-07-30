#include <iostream>
using namespace std;

int H, M;
int output_H, output_M;
int main(){
    cin >> H >> M;
    
    output_H = H;
    output_M = M - 45;
    if(output_M < 0){
        output_M = 60 + output_M;
        output_H -= 1;
        if(output_H == -1){
            output_H = 23;
        }
    }
    cout << output_H << " " << output_M;
    return 0;
}