#include <iostream>

class Date {
    int year_;
    int month_;
    int day_;

public:
    void SetDate(int year, int month, int date);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    int GetCurrentMonthTotalDays(int year, int month);

    void ShowDate();

    Date(int year, int month, int day) {
        year_ = year;
        month_ = month;
        day_ = day;
    }
};

void Date::AddYear(int inc) {
    year_ = year_ + inc;
}
void Date::ShowDate() {
    std::cout << "today is "  << year_ << " year " << month_ << " month " << day_ << " day"  
    << std::endl;
}

int main(){
    Date day(2011, 3, 1);
    day.ShowDate();

    day.AddYear(10);
    day.ShowDate();

    return 0;
}