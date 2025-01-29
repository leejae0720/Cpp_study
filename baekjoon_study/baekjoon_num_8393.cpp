#include <iostream>

int n = 0;
int result = 0;

void add(int n){

  for(int i=1; i<=n; ++i){
    result += i;
  }

  std::cout << result << std::endl;
}

int main() {
    std::cin >> n;

    add(n);

    return 0;
}
