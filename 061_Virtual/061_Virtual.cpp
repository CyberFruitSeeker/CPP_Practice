// 061_Virtual.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit 
{
public:
    // virtual문법은 다음과 같은 의미를 가지고 있습니다.
    // 자식이 만약 나와 완전히 동일한 함수를 구현한다면 (override)
    // 자식의 함수를 우선적으로 실행한다.
    virtual int GetAtt() 
    {
        return Att;
    }

private:
    int Att = 10;
};

class Monster : public FightUnit
{

};

class Player : public FightUnit
{
protected:
    // override를 붙여서 부모에게서 물려받아서 재구현한 함수라는 것을
    // 명시한다. 안붙여도 의도대로 동작하지만.
    int GetAtt() override
    {
        // 부모의 공격력 + WeaponAtt
        // GetAtt() + WeaponAtt;
        // 함수의 이름도 필요할때 FullName으로 명시해서 호출해야 합니다.
        return FightUnit::GetAtt() + WeaponAtt;
    }

public:
    int WeaponAtt = 10;
};

void Fight(FightUnit* Left, FightUnit* Right)
{
    // 겉으로 보기에는 FightUnit지만
    // 동작할때는 플레이어나 몬스터처럼 동작하는것.
    // 그래서 다형성이라고 한다.
    int Value0 = Left->GetAtt();
    int Value1 = Right->GetAtt();
}

int main()
{
    // 가장 말단 형태로는 거의 사용하지 않아요.
    Player NewPlayer;
    Monster NewMonster;

    //int Value0 = NewPlayer.Player::GetAtt();
    //int Value1 = NewMonster.GetAtt();
    
    Fight(&NewPlayer, &NewMonster);
}
