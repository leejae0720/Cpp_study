#include <iostream>
#include <vector>
using namespace std;

vector <int> num1, num2;

int cal(int input1, int input2){
    int remain1;
    int input2_0, input2_1, input2_2;
    int output1, output2, output3, output4;

    input2_0 = input2 / 100;
    remain1 = input2 % 100;
    input2_1 = remain1 / 10;
    input2_2 = remain1 % 10;

    num2.push_back(input2_0);
    num2.push_back(input2_1);
    num2.push_back(input2_2);

    output1 = input1 * num2[2];
    output2 = input1 * num2[1];
    output3 = input1 * num2[0];
    output4 = input1 * input2;

    cout << output1 << endl;
    cout << output2 << endl;
    cout << output3 << endl;
    cout << output4 << endl;

    return 0;
}

int main(){
    int input1, input2;
    cin >> input1 >> input2;
    cal(input1, input2);
    return 0;
}