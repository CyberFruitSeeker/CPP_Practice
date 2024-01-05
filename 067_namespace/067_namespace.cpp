// 067_namespace.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 한 회사에서 UI를 담당하는 사람이 있고
// Play팀 몬스터 담당하는 사람이 있다.
// 몬스터가 죽으면 장비 같은 것을 떨군다.

// 이런식으로 이름이 겹치는 것을 막기 위해 만든것이 바로 namespace
// 앞에 접두사를 붙이는 기능이다.
//내 클래스를 사용할려면? => 접두사를 붙여라

// FullName에 접두사를 붙이고 영역을 구분시킨다.
namespace UI
{
    class /*UI::*/Item
    {
    public:
        Item()
        {
            printf_s("인벤토리 아이템");
        }
    };
}

// 이건 몬스터를 담당하는 사람이 만든다 Item
namespace Play
{
    namespace Monster
    {
        class /*MonsterDrop*/Item
        {
        public:
            Item()
            {
                printf_s("몬스터 드랍 아이템");
            }
        };
    }
}

class Item
{
public:
    Item()
    {
        printf_s("전역 아이템");
    }
};

// 이런식으로

namespace UI
{
    class /*UI::*/Button
    {
    };
}

// 선생님은 극혐하는 문법이 있는데.
// 이름을 UI를 사용하지 않아도 알아서 연결해달라는 문법인데.
// using namespace UI;

int main()
{
    // using namespace UI;
    // UI를 생략하고 쓰겠다.
    // 그럼 왜 나눴냐?
    // UI::Item
    // namespace로 나눈다.
    UI::Button NewButton;
    // Item NewItem;

    UI::Item NewUIItem;

    Play::Monster::Item NewPlayItem;

    // std::가 바로 namespace
    // 스텐다드 
    // C++ 언어차원에서 지원하는 기본기능이라는 뜻이다.
    std::cout << "Hello World!\n";
}
