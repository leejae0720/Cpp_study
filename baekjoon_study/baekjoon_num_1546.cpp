#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int N, M;
    float input_score, output_score, result1, result2;
    vector <float> input;
    vector <float> output;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> input_score;
        input.push_back(input_score);
    }
    M = *max_element(input.begin(), input.end());
    
    for(int i = 0 ; i < N; i++){
        output_score = (input[i]/M)*100;
        output.push_back(output_score);
    }

    result1 = accumulate(output.begin(), output.end(), double(0));
    result2 = result1 / N;

    cout << result2 << endl;
    return 0;
}