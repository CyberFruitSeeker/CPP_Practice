// 057_HasA_IsA.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 객체지향
// 
// 
// 싸우는애
// 대화하는애
// 
// 플레이어 : 싸우는애, 대화하는애
// 몬스터 : 싸우는애

// 플레이어 Is A 싸우는애
// 플레이어는 싸우는 애다.
// 그걸 표현하는 문법이 상속

// 검
// 무기는 플레이어가 가져야할 요소는 맞죠?

class Item 
{
public:
    int Cost;
};

class Potion : public Item
{
};

class Sword : public Item
{
};

// 말단 개념이 아닌 근본개념을 제공하기 위한 클래스를 만드는 경우가 많습니다.

// 플레이어를 설계할때 
// 플레이어는 뭘할수있지?
// 이동할수 있다.

// 몬스터는 뭘할수있지?
// 이동할수 있다.

class FightUnit 
{
public:
    int PAtt;
    int MAtt;
    int EAtt;
    int Hp;
    int Def;
    int Cri;

public:
    void Damage(const FightUnit& _AttUnit)
    {
        Hp -= _AttUnit.PAtt - Def * _AttUnit.EAtt;
    }

    //void Damage(int _Att, int _Cri)
    //{

    //}
};

// 맴버변수로 다른 클래스를 가지면
// 플레이어 Has A Sword
class Player : public FightUnit
{
private:
    Sword Weapon;
};

class Monster : public FightUnit
{
private:
    Sword Weapon;
};

class NPC : public FightUnit
{

};


int main()
{
    {
        Player NewPlayer;
        // 이런건 사용하지 않습니다.
        FightUnit Unit = NewPlayer;
    }

    {
        int A;
        bool C = A;
    }

    {
        int A;
        bool* Ptr = reinterpret_cast<bool*>(&A);
    }

    {
        // 이걸 업캐스팅이라고 합니다.
        // 굉장히 권장됩니다.
        // 굉장히 건강하고 권장되는 암시적 형변환.
        Player NewPlayer;

        Monster NewMonster;

        NewPlayer.Damage(NewMonster);
        NewMonster.Damage(NewPlayer);
    }

    {
        // 업캐스팅
        // 자식클래스의 객체는 언제든 부모 클래스의 참조형이 될수 있다.

    }


    std::cout << "Hello World!\n";
}
