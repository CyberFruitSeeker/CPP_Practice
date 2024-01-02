// 055_inheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 불합리.
// 문법의 발전은 모두다
// 프로그래밍 코드 재활용성을 증가 시키기 위해서 발전해 왔다.
// 코드 재활용성 => 두번치기 귀찮네.
// 복붙도 귀찮다.
// 상속은 왜하는가?
// 코드 재활용성을 위해서.

// XXXXXX분야의 클래스들이 공통적으로 가져야할 기능을 가진다.

// 싸우는 애들이 공통적으로 가져야할 기능을 가진다.

//               외부     자식     내부
// public        0        0       0
// protected     x        0       0
// private       x        x       0

class FightUnit
{
public:
    int publicInt = 0;
    void publicFunction()
    {

    }

protected:
    int protectedInt = 0;
    void protectedFunction()
    {

    }

private:
    int privateInt = 0;
    void privateFunction()
    {

    }





    //int Att = 10;
    //int Hp = 100;
    //void Damage(int _Att) 
    //{
    //    Hp -= _Att;
    //}
};

// 그 기능을 물려받기 원하는 클래스 이름 
// 오른쪽에 : 접근제한지정자 부모클래스이름
// 상속 완료
// 상속에서 접근제한 지정자가 무엇이지?

class publicPlayer : public FightUnit
{
    // 상속 접근제한 지정자와
    // 기존 접근제한 지정자를 비교해서 더 좁은 접근제한 지정자로 만든다.

    //void Test()
    //{
    //    this->
    //}

//public: // 비교 public
//    int publicInt = 0;
//    void publicFunction()
//    {
//
//    }
//
//protected: // 비교 public
//    int protectedInt = 0;
//    void protectedFunction()
//    {
//
//    }

};

class protectedPlayer : protected FightUnit
{
    //public: // 비교 protected
    //protected: 
    //    int publicInt = 0;
    //    void publicFunction()
    //    {
    //
    //    }
    //
    //protected:
    //    int protectedInt = 0;
    //    void protectedFunction()
    //    {
    //
    //    }

};

class privatePlayer : private FightUnit
{
    //public: // 비교 private
    //private: 
    //    int publicInt = 0;
    //    void publicFunction()
    //    {
    //
    //    }
    //
    //protected: // 비교 private
    //private:
    //    int protectedInt = 0;
    //    void protectedFunction()
    //    {
    //
    //    }

};


class Monster : public FightUnit
{
};

int main()
{
    publicPlayer NewpublicPlayer = publicPlayer();

    protectedPlayer NewprotectedPlayer = protectedPlayer();
    NewprotectedPlayer.

    //NewPlayer.Att = 10;
    //NewPlayer.Damage(20);

    Monster NewMonster = Monster();
    //NewMonster.Att = 10;
    //NewMonster.Damage(20);

    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

