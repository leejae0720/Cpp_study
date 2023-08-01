#include <iostream>
using namespace std;

int x, y, z;
int result;
int main(){
    cin >> x >> y >> z;

    if(x == y && y == z && x == z){
        result = 10000+x*1000;
    }
    else if(x == y && x != z && y != z){
        result = 1000+x*100;
    }
    else if(x != y && y == z && x != z){
        result = 1000+y*100;
    }
    else if(x == z && z != y && x != y){
        result = 1000+x*100;
    }
    else if(x != y && x != z && y != z){
        if(x>y && x>z){
            result = x*100;
        }
        else if(y>x && y>z){
            result = y*100;
        }
        else{
            result = z*100;
        }
    }

    cout << result << endl;
    return 0;
}