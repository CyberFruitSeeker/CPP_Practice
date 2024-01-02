// 058_Multiinheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MoveUnit
{
public:
    void Move()
    {

    }
};

class TalkUnit
{
public:
    void Talk(const TalkUnit& _Unit)
    {

    }
};

class FightUnit 
{
public:
    void Fight(const FightUnit& _Unit)
    {
        if (this == &_Unit)
        {
            return;
        }

    }
};

// 다중상속
class Player : public TalkUnit, public FightUnit, public MoveUnit
{

};

class Monster : public FightUnit, public MoveUnit
{

};

int main()
{
    Player NewPlayer;

    NewPlayer.Fight(NewPlayer);

    Monster Monster;

    Player NewPlayer2;

    NewPlayer.Talk(NewPlayer2);

    std::cout << "Hello World!\n";
}
