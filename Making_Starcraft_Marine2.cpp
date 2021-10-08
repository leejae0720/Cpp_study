#include <iostream>

class Marine {
    private:
        static int total_marine_num;                // 프로그램이 종료될때 소멸 되는 static 변수로 지정

        int hp;
        int coord_x, coord_y;
        const int default_damage;                   // const를 이용해서 변수가 변화하는것을 방지함.
        bool is_dead;
    public:
        Marine();
        Marine(int x, int y);
        Marine(int x, int y, int default_damage);
        ~Marine() {total_marine_num--; }            // 소멸자 생성시 전체 marine 수 줄여준다.

        int attack();
        void be_attacked(int damage_earn);
        void move(int x, int y);

        void show_state();
};

int Marine::total_marine_num = 0;                   // class내 static 변수 초기화

Marine::Marine() : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
    total_marine_num++;
}       // 초기화 리스트(initializer list), 생성자 호출과 동시에 멤버 변수들을 초기화해준다.
        // ***<생성과 초기화를 동시에 함>***

Marine::Marine(int x, int y) : hp(50), coord_x(x), coord_y(y), default_damage(5), is_dead(false) {
    total_marine_num++;
}       // 초기화 리스트(initializer list), 생성자 호출과 동시에 멤버 변수들을 초기화해준다.
        // ***<생성과 초기화를 동시에 함>***

Marine::Marine(int x, int y, int default_damage) \
    :
        coord_x(x),
        coord_y(y),
        hp(50),
        default_damage(default_damage),
        is_dead(false) {total_marine_num++;}

void Marine::show_state() {
    std::cout << "*** Marine ***" << std::endl;
    std::cout << "hp: " << hp << std::endl;
    std::cout << "location: (" << coord_x << "," << coord_y << ")" << std::endl;
    std::cout << "is_dead: " << is_dead << std::endl;
    std::cout << "damage: "  << default_damage << std::endl;
    std::cout << "Total Marine Number: " << total_marine_num << std::endl;
}

void Marine::be_attacked(int damage_earn) {
    hp = hp - damage_earn;
    if(hp <= 0) {
        is_dead = true;
    }
}

void create_marine() {
  Marine marine3(10, 10, 4);
  marine3.show_state();
}

int Marine::attack() {
    return default_damage;
}

int main() {
    Marine Marine1(3,4, 10);
    Marine1.show_state();

    Marine Marine2(4,3, 5);
    Marine2.show_state();    

    create_marine();

    std::cout << "\n" << "marine1 attck to marine2" << "\n" << std::endl;

    Marine2.be_attacked(Marine1.attack());
    Marine2.show_state();
    
}