#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, c;
int max_num, min_num, mid_num, cal_num;
int num;
vector <string> vec;
int main(){
    cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
    while(1){
        cin >> a >> b >> c;
        
        max_num = max(a, max(b, c));
        min_num = min(a, min(b, c));
        mid_num = a + b + c - max_num - min_num;
        cal_num = min_num + mid_num;

        if(a==0 || b == 0 || c == 0){
            break;
        }

        if(cal_num <= max_num){
            vec.push_back("Invalid");
            num++;
        }
        else if(a == b && a == c && b == c){
            vec.push_back("Equilateral");
            num++;
        }
        else if((a == b)&&(a != c) || (a == c)&&(a != b) || (b == c)&&(b != a)){
            vec.push_back("Isosceles");
            num++;
        }
        else if((a!=b)&&(a!=c)&&(b!=c)){
            vec.push_back("Scalene");
            num++;
        }
    }
    
    for(int i = 0; i<num; i++){
         cout << vec[i] << endl;
    }
    return 0;
}