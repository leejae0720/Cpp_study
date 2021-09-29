#include <iostream>

class Date {
    private:
        int year_;
        int month_;
        int day_;

    public:
        void SetDate(int year, int month, int day) {
            year_ = year;
            month_ = month;     //1~12 숫자
            day_ = day;         //1~31 숫자
        }

        void AddDay(int inc) {
            day_ = day_ + inc;
            
            if((month_==1, 3, 5, 7, 8 ,10, 12) && (day_>31)){
                day_ =day_ - 31;
                month_ = month_ + 1;
                if(month_ > 12) {
                    year_ = year_ + 1;
                    month_ = month_ - 12;
                } 
            }
            else if((month_==4,6,9,11 && (day_>30))) {
                day_ = day_ - 30;
                month_ = month_ + 1;
                if(month_ > 12) {
                    year_ = year_ + 1;
                    month_ = month_ - 12;
                }
            }

            else if((month_ == 2) && (day_ > 28)) {
                day_ = day_ - 28;
                month_ = month_  + 1;
                if(month_ > 12){
                    year_ = year_ + 1;
                    month_ = month_ - 12;
                }
            }
            
            else if(((month_ == 2) && (day_ > 29) && ((year_%4==0) && (year_%100 != 0)) || (year_%400==0))) {
                day_ = day_ - 29;
                month_ = month_ + 1;
                if(month_ > 12){
                    year_ = year_ +1;
                    month_ = month_ -12;
                }
            } 
            
        }

        void AddMonth(int inc){
            month_ = month_ + inc;
            if(month_ > 12) {
                month_ = month_ - 12;
                year_ = year_ + 1;
            }
        }

        void AddYear(int inc) {
            year_ = year_ + inc;
        }

        void View_Date() {
            std::cout << "year:" << year_ << std::endl;
            std::cout << "month: " << month_ << std::endl;
            std::cout << "day: " << day_ <<std::endl;
        }
};

int main() {
     Date date;
     date.SetDate(2021, 5, 12);
     date.AddYear(3);
     date.AddMonth(-3);
     date.AddDay(17);
     date.View_Date();
}