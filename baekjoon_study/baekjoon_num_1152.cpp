#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string str1;
    string str3;
    int output_num = 0;
    getline(cin, str1, '\n');

    stringstream stream(str1);
    while(stream>>str3){
        output_num += 1;
    }
    cout << output_num << endl;
    return 0;
}