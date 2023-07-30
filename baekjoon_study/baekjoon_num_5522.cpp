#include <iostream>

int main() {
    unsigned int i;
    unsigned int total_score =0; 
    unsigned int score;

    for(i = 0; i < 5; i++){
        std::cin >> score;
        if(score < 0 || score > 100){
            std::cout << "please re-enter score only 0~100" << std::endl;
        }

        total_score += score;
    }

    std::cout << total_score << std::endl;
    return 0;
}
