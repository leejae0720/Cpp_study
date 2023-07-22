#include <iostream>

int star_number;
int main(){
    std::cin >> star_number;

    for(int i = 1; i <= star_number; i++){
        for(int j = 1; j <= i; j++){
            std::cout << "*";   
        }
        std::cout << "\n";
    }

    return 0;
}