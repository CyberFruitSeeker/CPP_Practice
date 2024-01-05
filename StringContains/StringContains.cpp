// StringContains.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

enum class StringReturn
{
    Equal,
    NotEqual
};

//int StringCount(const char* const _Ptr)
//{
//    int Count = 0;
//    while (_Ptr[Count])
//    {
//        char Ch = _Ptr[Count];
//        ++Count;
//    }
//    return Count;
//}
// StringCount를 이런식으로 쓰지는 않는다.

StringReturn StringEqual(const char* const _Left, const char* const _Right)
{
    int LeftSize = static_cast<int>(strlen(_Left));
    int RightSize = static_cast<int>(strlen(_Right));
    // static_cast<int> 와도 같은 강제로 캐스팅 하는 방법은
    // 왠만하면 하지 않는 것이 좋다.

    if (LeftSize != RightSize)
    {
        return StringReturn::NotEqual;
    }

    // 50번지의 1바이트 값을 가져와라
    for (int i = 0; i < LeftSize; i++)
    {
        if (_Left[i]!= _Right[i])
        {
            return StringReturn::NotEqual;
        }
    }

    return StringReturn::Equal;
}

void StringAdd(char* _Dest, const char* _Left, const char* const _Right)
{
    int LeftSize = static_cast<int>(strlen(_Left));
    int RightSize = static_cast<int>(strlen(_Right));

    int Count = 0;

    // _Dest[0] 1000번지의 0번째 값
    // _Left[0] 50번지의 0번째 값

    for (int i = 0; i < LeftSize; i++)
    {
        _Dest[Count] = _Left[i];
        ++Count;
    }
    // 2
    for (int i = 0; i < RightSize; i++)
    {
        _Dest[Count] = _Right[i];
        ++Count;
    }

    _Dest[Count] = 0;


    return;
}

int StringContains(const char* const _Dest, const char* const _Find)
{
    return 0;
}

int main()
{

    {
        int Count = static_cast<int>(strlen("AAAA"));

        int a = 0;
    }
    
    
    {
        // strcmp
        // 왼쪽과 오른쪽이 같아?
        StringEqual("AAAAA", "AAAA");

        int Result0 = strcmp("AAAAA", "AAAAA");
        int Result1 = strcmp("AAAAA", "AAAA");
        int Result2 = strcmp("AAAAA", "BBBBB");

        StringReturn Return = StringReturn::Equal("AAAAA", "AAAAA");

        int a = 0;
    }


    {
        char Arr[100] = {}; // 뭐가 막 차있으면? : 뭘 채우든 마지막에 0 하나
        StringAdd(Arr, "djkhgds", "jkdfsd");
        int a = 0;
    }


    {


        char ArrTest[100];
        sprintf_s(ArrTest, "%s%s", "AAAAA", "BBBBB");
        // 이것보다 더 좋은 방법이 있지만, 이런게 있다는 것이 알면 된다.

        //화면에 출력하는 printf
        printf_s("AAA %d", 1);

        // strcmp()

        int Result = StringContains("aaaabbbbcccaa", "ab");

        int a = 0;
    }

}
