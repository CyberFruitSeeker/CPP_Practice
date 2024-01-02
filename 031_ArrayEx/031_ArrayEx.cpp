// 031_ArrayEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// C++ 문법적으로 허용은 하는데.
void Function(int _Ptr[10])
// void Function(int* _Ptr)
{
    int Size = sizeof(_Ptr);

    int a = 0;
}

void StringCount(char* Test, int _Len)
// void Function(int* _Ptr)
{

}

void SetStatus(const char* _Name, int _Status) 
{
    // 파싱이라고 부릅니다.
    // 구글
    // 마소
    // Json
    // Xml
    
    // "Fighter_Ang_Status"

    // "{
    // <FighterStatus>
    //      <Att>10</Att>
    //      <Def>10</Def>
    // </FighterStatus>
    // }"
}

int main()
{
    // strlen 문자열 길이
    // strcmp 문자열 비교
    // strcpy_s 문자열 복사

    // int[]
    {
        int ArrayEx[10];
        // 암시적 형변환이 일어난 겁니다.
        Function(ArrayEx);
    }

    {
        int ArrayEx[99];
        // 암시적 형변환이 일어난 겁니다.
        Function(ArrayEx);
    }

    {
        "aaaaa";
        char Arr[10] = "aaaaa";
    }

    {
        int Result = strlen("fasdfsadfads");
        // strcpy_s(;
        // strcmp()

        int a = 0;
    }

    {
        // 500번지
        char Ptr[10] = "ABC";

        // "ABC"   "ABC"

        {
            //          500번지
            const char* LeftPtr = Ptr;
            //          100번지
            const char* RightPtr = "ABC";

            if (LeftPtr == RightPtr)
            {
                int a = 0;
            }
        }

        {
            //          100번지
            const char* LeftPtr = "ABC";
            //          100번지
            const char* RightPtr = "ABC";

            if (LeftPtr == RightPtr)
            {
                int a = 0;
            }
        }
    }

    {
        // 숙제 이 현상을 뭐라고 부를까요?
        // 정수의 바이트가 뒤집혀서 보이는 현상이.
        //          0b00000000 00000000 00000000 00000001
        // int Value = 0b00000000;
        int Value = 0b00000000000000000000000000000001;
        //          0b00010001 00000010 00000000 00000000

        char* Ptr = reinterpret_cast<char*>(&Value);

        //             Ptr[0]   Ptr[1]   Ptr[2]   Ptr[3]
        // char*    0b 00000001 00001100 00000000 00000000
        
        char Test0 = Ptr[0];
        char Test1 = Ptr[1];
        char Test2 = Ptr[2];
        char Test3 = Ptr[3];

        int a = 0;
    }
}
