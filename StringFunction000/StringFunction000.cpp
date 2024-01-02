// StringFunction000.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 뭔지는 모르지만 붙여 주세요.
int StringCount(char* _Ptr)
{
    // [f][t][z][0][0][0][0][0][0]
    // _Ptr[0]
    // _Ptr[1]
    // _Ptr[2]

    int Count = 0;

    while (_Ptr[Count])
    {
        ++Count;
    }


    return Count;
}

void StringReverse(char* _Ptr)
{
    int Value = StringCount(_Ptr);
    int Count = Value / 2;
    for (int i = 0; i < Count; i++)
    {
        char ChF = _Ptr[i];
        char ChB = _Ptr[(Value - 1) - i];

        char Temp = _Ptr[i];
        _Ptr[i] = _Ptr[(Value - 1) - i];
        _Ptr[(Value - 1) - i] = Temp;
    }

    return;
}

int main()
{
    // 공백은 안넣겠습니다.
    // 영어만 취급하겠습니다.
    // 그리고 끝이 0이 아닌애는 그냥 오류로 보겠습니다.
    // 취급조차 안하겠다.

    {
        // [f][t][z][][][][][][]
        // Arr[0]
        // Arr[1]
        // Arr[2]
        char Arr[10] = "ftz";
        int Result = StringCount(Arr);
        int a = 0;
    }

    {
        char Arr[10] = "12345";
        //StringReverse(Arr);

        // 스왑 알고리즘
        char Ch = Arr[0];
        Arr[0] = Arr[1];
        Arr[1] = Ch;

        //Arr[0] = 'B';
        //Arr[1] = 'A';
        // EDCBA
        int a = 0;
    }

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
