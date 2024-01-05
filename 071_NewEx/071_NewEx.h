#include <iostream>

class MyInt
{
public:
    int operator + (int _Value)
    {

    }
};

//int* Test() 
//{
//    return new int();
//}

class Sword
{

};

class Player
{
public:
    Sword* Weapon = nullptr;

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
        NewInt.operator+(/*&NewInt => this,*/ 10);

        // Value 포인터와 원리가 똑같다.
        int Value = int(0);
        // 위치 200번지
        // 크기 4
        // 형태 int
        // 값 0

        // 200번지 = 20;

        int* Ptr = &Value;
        // 위치 220번지
        // 크기 8
        // 형태 int*
        // 값 200번지

        // Ptr = nullptr;
        // 220번지 = nullptr;
        // 220번지 = 10;

        *Ptr = 1000;
        // 200번지 = 1000;

        int(); // int 만든다.

        int Value = int();

        Value = 20;
    }

    {
        int(10);
        Player();
        // Player NewPlayer = Player();

        // 일반적으로 new를 리턴값을 받지 않으면 무조건 릭이 됩니다.
        // 해결할 방법이 없지는 않지만

        new int(10);
        // 진짜 본모습 생략하지 않은 본모습은 아래와 같다.
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