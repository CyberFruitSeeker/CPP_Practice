// 028_Variableargument.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(const char* const _Ptr)
{
    int Count = 0;
    while (_Ptr[Count])
    {
        char Ch = _Ptr[Count];
        ++Count;
    }
    return Count;
}


// 함수의 인자는 일반적으로 내가 정해준 개수만큼만 넣어줄수고 있고.
// 심지어 내가 정해준 개수보다 적게 넣으면 
// 많이 넣어줘도 에러.
// 적게 넣어줘도 에러.
void MyPrintf(const char* const _Format, ...)
{
    int Number = StringCount(_Format);

    for (int i = 0;  i < Number;  i++)
    {
        char Ch =  _Format[i];

        if ('%' == Ch)
        {
            int a = 0;
        }

        putchar(Ch);
    }
}

// 가변인자란
// 인자의 개수를 정하지 않고
// 내가 인자를 넣어주는 순간 이 함수를 지우고 그 인자 개수만큼의 함수를 만들어요.
// 왜 8바이트씩 떨어져 있을까?
// 어떤 자료형도 C++에서 8바이트보다 크지 못하다.
void VarTest(int Count, int Check1, int Check2)
{
    // __int64 Address0 = reinterpret_cast<__int64>(&Check0);

    int* Ptr = &Count;

    // 포인터의 더하기는
    // 내 현재위치 + sizeof(자료형) * 넣어준 정수
    // 100번지 + sizeof(int) * 2 => 108
    // 100번지 + sizeof(int) * 2
    Ptr = Ptr + 2;

    int Para0 = *Ptr;

    Ptr += 2;

    int Para1 = *Ptr;


    int a = 0;
}

void VarCountCheck(int Count, ...)
{
    int* Ptr = &Count;

    for (int i = 0; i < Count; i++)
    {
        Ptr = Ptr + 2;
        int Value = *Ptr;
        int a = 0;
    }
}

// VarTest(10, 20);
//void VarTest(int Count0, int Count1) 
//{
//
//}

int main()
{
    // 기본적으로 저는 개선한다.
    // 이상한 점까지 똑같아야 한다.
    char Arr[10] = {'a','a', 'a', 0, 'a', 'a', 'a', 0 };

    // VarTest(2, 20, 30);

    int* ptr = nullptr;

    // VarCountCheck(8, 1, 2, 3, 4);

    // c스타일 함수.
    // printf_s("%d count %d", 999);


    MyPrintf("%d count %d");

    // ???????
    // 인자가 한계가 없어
    // 가변인자는 사용하는 순간 그 함수를 만들어내는게 가변인자 함수입니다.
    // printf_s("aaa", 312, 312, 3123, 312,312 ,3123 ,312 ,312);

    // printf_s(Arr);
}
