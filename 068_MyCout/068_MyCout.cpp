// 068_MyCout.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

namespace std
{
    class MyStream
    {
    public:
        void operator <<(const char* _Text)
        {
            // ????? 내부에서 printf를 쓸지 뭐할지
            // 알수는 없다.
            printf_s(_Text);
        }
    };

    // 전역 객체
    extern MyStream mycout;
}

// cpp
std::MyStream mycout;

int main()
{
    std::mycout << "Hello World!\n";
    std::mycout.operator<<("Hello World!\n");
    std::cout << "Hello World!\n";
    // std::cout.operator<<("Hello World!\n");
}
