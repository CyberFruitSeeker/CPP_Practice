// 039_AccessSpecifier.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 전역

class Monster
{
// 클래스의 내부 맴버

    // 전역 + 지역 => 외부
// public:
    // 외부 자식 맴버 
    //   0    0   0

// protected:
    // 외부 자식 맴버 
    //   x    0   0
    
// private: 생략되어있는 디폴트 접근제한 지정자
    // 외부 자식 맴버 
    //    x    x   0

public:
    int publicint;
    void publicFunction()
    {
        protectedint = 20;
        protectedFunction();

        privateint = 20;
        privateFunction();
    }

protected:
    int protectedint;
    void protectedFunction()
    {
    }

private:
    int privateint;
    void privateFunction()
    {
    }

};


class Player
{

public:
    int GetHp() 
    {
        return Hp;
    }

    void SetHp(int _Value)
    {
        if (_Value == 0)
        {
            int a = 0;
        }

        Hp = _Value;

    }

    // 목적에 따라서 구분하는 함수로 절대 변수를 그냥 외부에서 접근하지 
    // 못하는게 안전하고 여러모로 좋다.
    void Damage(int _Att) 
    {

    }

protected:

private:
    // 변수는 보통 기본적으로 private이거나 protected입니다.
    int Hp;
    int Att;
};

int TestValue = 200;
int GetTest() 
{
    return TestValue;
}

class BossMonster 
{
// private: class는 기본접근제한 지정자가 private이다.
    int Hp;
    int Att;
};

int main()
{
    int Value = GetTest();

    Value = 3000;

    // 지역(외부)

    Monster NewMonster = Monster();

    Player NewPlayer = Player();

    class Monster NewMonster2 = class Monster();


    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);

    NewPlayer.SetHp(100);


    // 고급언어는 인간의 현실적인 생각을
    // 프로그래밍으로도 나타내기 위해서 만들어졌어.
    // C부터 시작하는 모든 프로그래밍 언어들은
    // 인간의 생각이나 가치관이나 개념을 프로그램으로 표현하기 위해서 만들어졌기 때문에.
    // 지극히 인간적인 문법들을 가지고 있다.
    // C++은 그 중간에 있는 언어라서 오히려 게임에서 사용된다.
    
    // 객체가 값형이거나 레퍼런스 형일때 .을 누르면 
    // 객체를 사용이 가능하다.
    // NewMonster.
    // 클래스의 기본은 캡슐화
    // 현실에 
    // 객체지향의 4대특성 어디서는 추상화, 상속, 다형성, 캡슐화


    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    NewPlayer.SetHp(0);


    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    NewPlayer.SetHp(100);
    // 추상화
    // 몬스터 만들고 싶다. => 클래스 만들면 끝.
    // 캡슐화
    // 객체가 모든것을 외부에 공개할 필요는 없다.

    std::cout << "Hello World!\n";
}
