#include <iostream>
using namespace std;

int A, B, C;
int output_A, output_B;
int main(){
    cin >> A >> B;
    cin >> C;

    output_A = A;
    output_B = B + C;
    for(int i = 0; i<17; i++){
        if(output_B >= 60){
            output_A += 1;
            output_B -= 60;
            if(output_A > 23){
                output_A -= 24;
            }
        }
    }
    
    cout << output_A << " " << output_B;
    return 0;
}