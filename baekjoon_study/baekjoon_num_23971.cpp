#include <iostream>
#include <cmath>

using namespace std;
int main(){
  double h, w, n, m;
  cin >> h >> w >> n >> m;
  int num1 = ceil(h/(n+1));
  int num2 = ceil(w/(m+1));
  cout << num1*num2 << endl;
  return 0;
}
