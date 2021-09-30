#include <iostream>
#include <cstring>

// Marine Class 생성
class Marine {
    private:
        int hp;                 //체력
        int coord_x, coord_y;   //위치
        int damage;             //공격력
        bool is_dead;           //생사 유무
        char* name;

    public:
        Marine();               //기본 생성자
        Marine(int x, int y, const char* marine_name);      //이름과 좌표가 있는 마린 호출 함수 
        Marine(int x, int y);   // x,y 좌표 마린 생성
        ~Marine();              // 소멸자 생성

        int attack();                           //데미지를 리턴
        void be_attacked(int damage_earn);      //입는 데미지
        void move (int x, int y);               //움직인 위치

        void show_status();     //현재 마린의 상태를 보여준다.
};
// 기본적인 마린 생성자 호출
Marine::Marine() {
    hp=50;
    coord_x = coord_y = 0;
    damage =5;
    is_dead = false;
    name = NULL;
}
// 이름이 있는 마린 생성해주는 생성자 호출
Marine::Marine(int x, int y, const char* marine_name){
    name = new char[strlen(marine_name)+1];
    strcpy(name, marine_name);

    hp=50;
    coord_x = x;
    coord_y = y;
    damage =5;
    is_dead = false;
}
// name 배열의 new 생성자에 소멸자를 생성해주는 Class 속 함수, main()함수에 배열 속 마린이 delete 될때 생성자도 같이 delete 됨.
Marine::~Marine() {
    std::cout << name << " is call to destructor " << std::endl;
    if(name != NULL) {
        delete[] name;
    }
}
// x, y 좌표를 가진 마린 생성자 호출
Marine::Marine(int x, int y) {
    coord_x =x;
    coord_y = y;
    hp= 50;
    damage = 5;
    is_dead =false;
    name = NULL;
}

void Marine::move(int x, int y){
    coord_x = x;
    coord_y = y;
}

int Marine::attack() {
    return damage;
}

void Marine::be_attacked(int damage_earn) {
    hp = hp - damage_earn;
    if(hp<0){
        is_dead = true;
    }
}

void Marine::show_status() {
    std::cout << "*** Marine ***" << std::endl;
    std::cout << "Location: ( " << coord_x << "," << coord_y <<
    " ) " <<std::endl;
    std::cout << " HP: " << hp << std::endl;
}

int main() {
    Marine* marines[100];

    marines[0] = new Marine(2,3, "Marine1");
    marines[1] = new Marine(3,5, "Marine2");

    Marine marine1(2, 3);
    Marine marine2(3, 5);

    marines[0] -> show_status();
    marines[1] -> show_status();

    std::cout << " num1 marine attack to num2 marine " << std::endl;

    marines[1]->be_attacked(marines[0]->attack());

    marines[0]->show_status();
    marines[1]->show_status();

    delete marines[0];
    delete marines[1];
}