#include <iostream>

//int option_cla(option_number, option_priece){

int main(){
    unsigned int test_try_number, car_price, option_try, option_number, option_price;
    unsigned int option_total_price, total_price = 0;
    unsigned int option_mid_price [1000] = {};

    std::cin >> test_try_number;
    for(int i=1; i <= test_try_number; i++){
        std::cin >> car_price;
        std::cin >> option_try;

        for(int j = 1; j <= option_try; j++){
            std::cin >> option_number >> option_price;
            option_mid_price[j] = option_number * option_price;
        }

        for(int k = 1; k <= option_try; k++){
            option_total_price += option_mid_price[k];
        }

        total_price = car_price + option_total_price;
        std::cout << total_price << std::endl;
    }
    //std::cin >> test_case_number >> car_price;
    //std::cout << test_case_number << " " << car_price << std::endl;
    return 0;
}