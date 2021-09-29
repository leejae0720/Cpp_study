#include <iostream>

//Animal 이름을 가진 class 생성하기
class Animal {
    private:    //아래 쓰여진 모든 것들은 객체 내에서 보호 된다라는 의미.
        int food;
        int weight;

    public:     //외부에서 마음껏 이용 가능한 영역이라는 의미.
        void set_animal(int _food, int _weight) {
            food = _food;
            weight = _weight;
        }
        void increase_food(int inc) {
            food = food + inc;
            weight = weight + (inc/3);
        }

        void view_stat() {
            std::cout << "This animal food: " << food << std::endl;
            std::cout << "This animal weight: " << weight << std::endl;
        }
};

//main function에서 클래스 구현하기
int main() {
    Animal animal;
    animal.set_animal(100, 50);
    animal.increase_food(30);

    animal.view_stat();
    return 0;
}