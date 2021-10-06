#include <iostream>

class Marine {
    private:
        int hp;
        int coord_x, coord_y;
        const int default_damage;
        bool is_dead;
    public:
        Marine();
        Marine(int x, int y);

        int attack();
        void be_attacked(int damage_earn);
        void move(int x, int y);

        void show_state();
};

Marine::Marine() : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
}       // 초기화 리스트(initializer list), 생성자 호출과 동시에 멤버 변수들을 초기화해준다.
        // ***<생성과 초기화를 동시에 함>***

Marine::Marine(int x, int y) : hp(50), coord_x(x), coord_y(y), default_damage(5), is_dead(false) {
}       // 초기화 리스트(initializer list), 생성자 호출과 동시에 멤버 변수들을 초기화해준다.
        // ***<생성과 초기화를 동시에 함>***
void Marine::show_state() {
    std::cout << "*** Marine ***" << std::endl;
    std::cout << "hp: " << hp << std::endl;
    std::cout << "location: (" << coord_x << "," << coord_y << ")" << std::endl;
    std::cout << "is_dead: " << is_dead << std::endl;
}

void Marine::be_attacked(int damage_earn) {
    hp = hp - damage_earn;
    if(hp =0) {
        is_dead = true;
    }
}

int Marine::attack() {
    return default_damage;
}

int main() {
    Marine Marine1(3,4);
    Marine Marine2(4,3);

    Marine1.show_state();
    Marine2.show_state();    

    std::cout << "\n" << "marine1 attck to marine2" << "\n" << std::endl;

    Marine2.be_attacked(Marine1.attack());
    Marine2.show_state();
    
}