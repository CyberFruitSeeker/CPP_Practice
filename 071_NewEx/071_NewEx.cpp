// 071_NewEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyInt
{
public:
    int operator + (int _Value)
    {

    }
};

//int Test()
//{
//    return new int();
//}
// 이런식으로 int()해서 값을 안받는 것은 메모리 leak을 유발하는 코드

class Sword
{

};

class Player
{
public:
    Sword* Weapon = nullptr; // 포인터를 이용해서 검과 플레이어를 분리

public:
    void CreateSword()
    {
        Weapon = new Sword();
    }

    void DeleteSword()
    {
        delete Weapon;
    }
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

    {
        Sword NewSword;
        Player NewPlayer0;
        NewPlayer0.Weapon = &NewSword;

        Player NewPlayer1;
    }

    {
        MyInt NewInt = MyInt();

        // NewInt + 10;
        NewInt.operator+(/*&NewInt=>this,*/10);

        // 눈에 보이지는 않지만 첫번째 인자가 있다.

    // Value 포인터와 원리가 똑같다.
        int Value = int(0);
        // 위치 : 200번지 라고 치자
        // 크기 : 4 바이트
        // 형태 : int
        // 값   : 0

        // 200번지 = 20;

        int* Ptr = &Value;
        // 위치 220번지
        // 크기 8
        // 형태 int*
        // 값   200번지

        // Ptr = nullptr;
        // 220번지 = nullptr;
        // 220번지 = 10;

        *Ptr = 1000; // 200번지에 1000을 넣어라

        int(); // int 만든다.

        int Value = int();

        Value = 20;
    }

    {
        int(10);
        Player();
        //Player NewPlayer = Player();

        // 일반적으로 new를 리턴값을 받지 않으면 무조건 릭이 발생된다.
        // 해결할 방법이 없는 것은 아니지만, 이런 것은 미리 방지해야 한다.

        new int(10);
        // 진짜 본모습을 생략하지 않은 모습은 아래와 같다.
        // reinterpret_cast<int*>(operator new(sizeof(int)));

        // operator new(sizeof(int));
        // int* operator new(int _size);

        new Player();
        // operator new(sizeof(Player));

        new int[10];
        // operator new(sizeof(int) * 10);

        /*int* Ptr              =        */new int(10);
        // 위치 1000번지                    위치 500번지
        // 크기 8바이트                     크기 4바이트
        // 형태 int*                       형태 int
        // 값 500번지                       값 10

        // *Ptr = 10;
        delete Ptr;
    }

}
