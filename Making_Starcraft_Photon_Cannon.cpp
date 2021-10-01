#include <iostream>
#include <string.h>

class Photon_Cannon {
    private:
        int hp, shield;             // 포토캐논의 hp와 shield 지정
        int coord_x, coord_y;       // 생성되는 포토캐논의 위치
        int damage;                 // 포토캐논의 damage 지정             
        char* name;                 // 각 포토캐논의 이름 부여

    public:
        Photon_Cannon(int x, int y);                            // 좌표를 갖는 생성자
        Photon_Cannon(const Photon_Cannon& pc);                 // 복수 생성자 생성
        Photon_Cannon(int x, int y, const char *cannon_name);   // 이름을 갖는 생성자 생성
        ~Photon_Cannon();                                       // 소멸자 생성

        void show_status();        
};
// (x, y) 좌표에 포토 캐논 생성자 호출
Photon_Cannon::Photon_Cannon(int x, int y){
    std::cout << " making constructor " << std::endl;
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;

    name = NULL;
}
// 포토캐논의 상태 표시 함수
void Photon_Cannon::show_status() {
    std::cout << " *** Photon Cannon *** " << std::endl;
    std::cout << "cannon name: " << name << std::endl;
    std::cout << "Location: (" << coord_x << "," << coord_y << ")" << std::endl; 
    std::cout << "hp: "  << hp << std::endl;  
}
// 포토캐논의 명칭을 갖는 생성자 호출, ****<복수 생성자의 표준 정의>****
Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {         // const 함수는 메소드내에서 인자가 변화하지 않을때 사용하면 바람직하다.
    std::cout << " making multi constructor " << std::endl;
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;

    name = new char[strlen(pc.name)+1];
    strcpy(name, pc.name);    
}

Photon_Cannon::Photon_Cannon(int x, int y, const char *cannon_name) {
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;

    name = new char[strlen(cannon_name)+1];
    strcpy(name, cannon_name);
}
// 생성자를 사용하고 끝낼 때 메모리 용량에서 없애는 소멸자 생성
Photon_Cannon::~Photon_Cannon() {
    if(name != 0) {
        delete[] name;                  // 배열의 소멸자 생성
    }
}

int main(){

    Photon_Cannon pc1 (3, 3, "cannon");
    Photon_Cannon pc2 = pc1;

    pc1.show_status();
    pc2.show_status();

}