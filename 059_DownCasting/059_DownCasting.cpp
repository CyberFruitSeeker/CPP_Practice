// 059_DownCasting.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit 
{
public:
    int Type = -1; // 0은 플레이어 1은 몬스터
    int Att = 20;
    int Hp = 100;
};

class Player : public FightUnit
{
public:
    unsigned int Level = 0;

public:
    Player()
    {
        Type = 1;
    }
};

class Monster : public FightUnit
{
public:
};

int main()
{
    // 업캐스팅 => 자식클래스는 언제든지 부모클래스의 참조형으로 형변환 될수 있다.

    Monster NewMonster;

    FightUnit* NewUnit = &NewMonster;















    // 다운캐스팅이란 부모클래스의 참조형에서 자식클래스의 참조형으로
    // 변환하는 것을 다운 캐스팅이라고 한다.
    // 건강하지 못한 캐스팅류
    // 구분 알수가 없어.

    Player* CurPlayer = reinterpret_cast<Player*>(NewUnit);


    int a = 0;





    std::cout << "Hello World!\n";
}
