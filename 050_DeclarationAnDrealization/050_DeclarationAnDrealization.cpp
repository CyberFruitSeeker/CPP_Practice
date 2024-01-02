// 050_DeclarationAnDrealization.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 전처리기 => 컴파일러 => 어셈블러 => 링커

// Declaration 선언
// 이런함수가 있을거야.
// 믿고 호출해도 됨.
// 나중에 구현이 분명히 있을거고
// 일단 나를 호출해 놓으면 구현과 연결될거야.
void FightDamage(int* _Hp, int _Att);
void FightDamage(int* _Hp, int _Att);
void FightDamage(int* _Hp, int _Att);

class Monster 
{
public:
    int Hp;

    // ?? 의구심.
    void /*Monster::*/Damage(/*Monster* this, */int _Att)
    {
        FightDamage(&Hp, _Att);
    }
};

void FightDamage(int* _Hp, int _Att);
void FightDamage(int* _Hp, int _Att);
void FightDamage(int* _Hp, int _Att);

class Player 
{
public:
    int Hp;

    void /*Player::*/Damage(/*Player* this, */int _Att)
    {
        FightDamage(&Hp, _Att);
    }

    void TestPlayerRender();
};

int main()
{
    if (true);
    {

    }

    Player NewPlayer;
    Monster NewMonster;

    NewPlayer.Damage(100);
    NewPlayer.Damage(200);

    NewPlayer.TestPlayerRender();

    //int I = 20;
    //I = 20;

    // std::cout << "Hello World!\n";
}

// 함수의 구현을 위에한다는게 아무런 이득이 없다.
// 그러므로 보통 선언은 위쪽에 전부다 남기고
// 구현만 아래쪽에 다 몰아 넣는 형태가 된다.

// 클래스 함수의 선언과 구현의 분리는
// 클래스 바깥쪽에서 이루어진다.
// 그때는 FullName으로 사용해야 한다.
void Player::TestPlayerRender()
{
    int a = 0;
}

// Realization 구현
// 링커는 이 구현부를 선언부와 연결해준다.
void FightDamage(int* _Hp, int _Att)
{
    *_Hp -= _Att;
}

