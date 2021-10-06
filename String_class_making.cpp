#include <iostream>
#include <cstring>

//string class 생성
class string {
    private:
        char *str;
        int len;

    public:
        string(char c, int n);                  // 문자 c가 n개 있는 문자열로 정의
        string(const char *s);                  // 문자 생성자
        string(const string &s);                // 복사 생성자
        ~string();                              // 소멸자

        void add_string(const string &s);       // str 뒤에 s를 붙인다.
        void copy_string(const string &s);      // str에 s를 복사한다.
        int strlen();                           // 문자열 길이 리턴

        void print_string();
};

// 문자 c가 n개 있는 기본 문자 생성자
string::string(char c, int n) {
    len = n;
    int i;
    str = new char[len +1];
    for(i=0; i<len; i++) {
        str[i] =c;
    }
    std::cout << str << std::endl;
}

// 문자열을 갖는 생성자 호출
string::string(const char *s) {
    std::cout << " making constructor " << std::endl;
    len = 0;
    while(*s != 0){
        len = len +1;
        s = s+ 1;
    }
    s = s-len;
    str = new char[len +1];
    strcpy(str,s);                  // 비어있는 'str'배열에 's'배열의 문자를 복사해주는 함수.
    std::cout << str << std::endl;
}

//복사 생성자 호출 (복사 생성자의 표준형 생각해 보기)
string::string(const string &s) {
    std::cout << " making multi constructor " << std::endl;
    len = s.len;
    str = new char[len+1];
    strcpy(str, s.str);
    std::cout << str << std::endl;
}

// str 뒤에 s를 붙이는 생성자 호출 (복사 생성자)
void string::add_string(const string &s) {
    len=len+s.len;
    char *temp = new char[len+1];
    strcat(temp, str);              // str에 있는 문자를 temp 문자열에 이어 붙여주는 함수
    strcat(temp, s.str);            // s.str에 있는 문자를 temp 문자열에 이어 붙여주는 함수
    delete[] str;                   // str의 소멸자 생성
    str = new char[len+1];
    strcpy(str, temp);
    delete[] temp;
}

// str에 s를 복사하는 생성자 호출 (복사 생성자)
void string::copy_string(const string &s) {
    delete[] str;
    len = s.len;
    str = new char[len+1];
    strcpy(str, s.str);
}

int string::strlen() {
    return len;
}

void string::print_string() {
    std::cout << str << std::endl;
}

// 소멸자 생성
string::~string() {
    if(str != 0) {
        delete[] str;
        std::cout << "making destructor" << std::endl;
    }
}

// main 함수 호출
int main() {
    string('a', 5);             // 문자 a가 5개 있는 문자열 호출(기본 생성자 호출)
    
    string str1("jaehong");  // 문자열 입력
    string str2(str1);          // 복사 생성자 호출
    str2.add_string(str1);      // str2 문자열에 str1 이어 붙이기 (함수 안에 new, delete 있음)
    str2.copy_string(str2);     // str2 문자열에 str2을 복사      (함수 안에 new, delete 있음)
    str1.print_string();
    str2.print_string();
    
    return 0;
}