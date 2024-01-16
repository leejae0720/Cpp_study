#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
    string str;
    int max_num = 0; 
    int index_num = -1;

    cin >> str;
    int num[26] = { 0 };

    for(int i = 0; i < str.size(); i++){
        str[i] = toupper(str[i]);
        num[str[i]-65]++;
    }

    for(int i = 0; i < 26; i++){
        if(max_num < num[i]){
            max_num = num[i];
            index_num = i;
        }
    }

    for(int i = 0; i < 26; i++){
        if (i == index_num)
            continue;
        if (num[i] == max_num){
            cout << '?';
            return 0;
        }
    }

    cout << (char)(index_num+65);
    return 0;
}