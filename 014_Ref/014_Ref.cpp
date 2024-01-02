// 014_Ref.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Damage(int* _MonsterHp, int _Att)
{
    // Damage함숨
}

void DamageRef(int& _MonsterHp, int _Att)
{

}


int main()
{

    {

        int Value;
        int* Ptr = &Value;
        // 레퍼런스를 의미하죠?
        int SizePtrValue = sizeof(*Ptr);

        int& Ref = Value;
        // 레퍼런스를 의미하죠?
        int SizeRefValue = sizeof(Ref);

        int a = 0;
    }

    // 레퍼런스 쉽게 설명해서
    // 상시 *이 붙은 상태로 사용하는 포인터
    {
        int MonsterHp = 100;
        int* Ptr = &MonsterHp;

        *Ptr = 100;
        *Ptr = 300;
        *Ptr = 300;

        Damage(nullptr, 10);
    }

    {
        int MonsterHp = 100;
        int& Ref = MonsterHp;

        Ref = 100;
        Ref = 300;
        Ref = 300;

        DamageRef(MonsterHp, 30);
    }

    {
        int MonsterHp = 100;

        int* Ptr = &MonsterHp;
        int& Ref = MonsterHp;

        *Ptr = 100;
        Ref = 100;

        int a = 0;
    }

    // 포인터는 변경이 가능하다는 사실때문에
    // 중간에 자신이 가리키는 대상을 바꿀수가 있다.
    {
        int Value0 = 10;
        int Value1 = 20;

        int* Ptr = &Value0;

        *Ptr = 1000;

        Ptr = &Value1;
        *Ptr = 2000;

        Ptr = nullptr;
    }

    {
        int Value0 = 10;
        int Value1 = 20;

        // 레퍼런스는 오직 딱 1번만 초기화되면
        // 1번 초기화되면 이제 자신이 카리키는 대상을 변경할수 없습니다.
        int& Ref = Value0;
        Ref = 1000;

        // Value1은 변경되지 않습니다.
        Ref = Value1;
        Ref = 2000;

        int a = 0;
    }


    // 레퍼런스를 사용할때는 절대 무조건 어떤일이 있어도 값이 들어올때 사용합니다.
    // 사용합니다.
}
