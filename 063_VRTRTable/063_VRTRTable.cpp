// 063_VRTRTable.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit
{
public:
    FightUnit()
    {
        this;
        int a = 0;
    }

    virtual void Damage()
    {

    }

    virtual void StatusRender()
    {

    }
};

class Player : public FightUnit
{
public:
    Player()
    {
        this;
        int a = 0;
    }

    void Damage() override
    {

    }
};

class A
{

};

class B : public A
{

};

int main()
{
    {
        int Arr[10];

        int* Ptr = Arr;

        int* ArrPtr[10];

        // 맨 뒤에 별만 확인해. 
        // 자료형 * 이라면 일단은 포인터야.
        int const* const* const* Ptr2D;

        int Size = sizeof(Ptr2D);

        int a = 0;
    }


    {
        int Value0;
        int Value1;

        int* ArrPtr[100];

        ArrPtr[0] = &Value0;
        ArrPtr[1] = &Value1;

        int** Ptr2D = ArrPtr;

        int a = 0;
    }

    {
        int* Value0;
        int* Value1;

        int** ArrPtr[2];

        ArrPtr[0] = &Value0;
        ArrPtr[1] = &Value1;

        int*** Ptr2D = ArrPtr;

        int a = 0;
    }

    {
        void(*Value0)();
        void(*Value1)();

        void(**ArrPtr[2])();

        ArrPtr[0] = &Value0;
        ArrPtr[1] = &Value1;

        void(***Ptr2D)() = ArrPtr;

        int Size = sizeof(Ptr2D);

        int a = 0;
    }

    {

        int* Arr;

        // 1000번지에 존재하는 
        // 100번지 200번지 300번지 400번지
        // 그 int*가 존재하는 1000번지
        int* PtrArr[10];

        int** Ptr = PtrArr;

        void(*FunctionPtr[10])();
        // void(*)();

        void(**FunctionPtr2D)() = FunctionPtr;

        int Size0 = sizeof(FunctionPtr);

        int Size1 = sizeof(void(*)());

        int a = 0;


    }

    // C++ 관련 면접.
    // 면접 단골질문.
    {
        int Size = sizeof(FightUnit);

        B NewTest;

        Player NewPlayer;

        int a = 0;
    }
}
