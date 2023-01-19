#include <iostream>

int main(){
   int lucky_number = 3;
   int user_input;

   while(1) {
    std::cout << "input: " << std::endl;
    std::cin >> user_input;
    if(lucky_number == user_input) {
        std::cout << "good" << std::endl;
    } else {
        std::cout << "no try again" << std::endl;
    }
   }
    return 0;
}