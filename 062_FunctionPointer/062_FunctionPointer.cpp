// 062_FunctionPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 프로그램의 모든건 위치, 크기, 형태, 값 으로 표현 가능
// 변수는 위치, 크기, 형태, 값을 표현하기 쉬움
// 그렇다면 함수는?

int Test()
{
    printf_s("AAAAAA");
    return 10;
}

void PlayerAttack()
{
    printf_s("플레이어가 공격합니다.");
}

void PlayerMove()
{
    printf_s("플레이어가 이동합니다.");
}

class Button
{
public:
    virtual void Click()
    {
        // 이것을 콜백 방식이라고 한다.
        Function();
    }

public:
    void(*Function)() = nullptr;
    int Image;
    int Color;
    int ScreenPos;
};

class MoveButton : public Button
{
public:
    void Click()override
    {
        printf_s("플레이어가 이동합니다.");
    }
};

class AttackButton : public Button
{
public:
    void Click()override
    {
        printf_s("플레이어가 공격합니다.");
    }
};

int main()
{
    {
        int Value = 20;
        int* IntPtr = &Value;
        *IntPtr = 20;
        // Value=30;


    // 함수포인터 선언 => 내가 그걸 사용하고싶어
        int(*Ptr)() = Test;
        // void (*변수명)()


        // 함수의 포인터이기 때문에
        // 이름만 달라졌지, 그 함수를 사용하는 방법 그대로 사용하게 된다.
        Ptr();
    }

    // 명시적으로 사용해야하는 경우 
    // 함수 포인터 문법은 UI등에서 가장 많이 사용된다.

    {
        MoveButton MButton;
        AttackButton AButton;

        MButton.Click();
        AButton.Click();
    }

    {
        Button AttButton;
        Button MoveButton;

        AttButton.Function = PlayerAttack;
        MoveButton.Function = PlayerMove;

        MoveButton.Function = PlayerAttack;

        AttButton.Click();
        MoveButton.Click();

        // 이름을 삭제하면 그대로 함수포인터의 자료형이 된다.
        int FunctionPointerSize = sizeof(void(*)());

        int a = 0;
    }

    std::cout << "Hello World!\n";
}

