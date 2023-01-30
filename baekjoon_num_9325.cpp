#include <iostream>

int main(){
    unsigned int test_try_number, car_price, option_try_number, option_number, option_price;
    unsigned int option_total_price = 0;
    unsigned int total_price = 0;
    unsigned int option_mid_price = 0;

    std::cin >> test_try_number;
    for(int i=1; i <= test_try_number; i++){
        std::cin >> car_price;
        std::cin >> option_try_number;

        for(int j = 1; j <= option_try_number; j++){
            std::cin >> option_number >> option_price;
            option_mid_price = option_number * option_price;
            option_total_price += option_mid_price;
        }

        total_price = car_price + option_total_price;
        std::cout << total_price << std::endl;
        total_price, car_price, option_total_price = 0;
    }
    return 0;
}