#include <iostream>
using namespace std;

double a, b; 
double result;
double calculation(double x, double y){
    return x/y;
}

int main(){
    cin >> a >> b;
    result = calculation(a, b);
    cout.precision(20);
    cout << result;
    return 0;
}
