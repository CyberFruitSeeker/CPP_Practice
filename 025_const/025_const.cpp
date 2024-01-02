// 025_const.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Damage(const int& _Hp, int _Att)
{
    // _Hp -= _Att;
}

// 참조형 (포인터나 레퍼런스)을 인자로 받는 함수가
// 참조형에 const를 안걸어놨다면
// 무조건 값이 수정되어서 나올수 있다는 의미로 받아들인다.

// const를 붙임으로해서 사용자가 넣어준 값이 바뀌지 않을것이라는것을
// 명시해준 것입니다.
int StringCount(const char* _Ptr)
{
    int Count = 0;

    // char* NewPtr = _Ptr;

    // 50번지
    // _Ptr[0]

    while (_Ptr[Count])
    {
        ++Count;
    }

    return Count;
}

int main()
{
    

    // 메모리영역의 크기가 중요하지
    // 사실 형태는 언제든지 내가 바꿀수 있다.
    // bool Arr[4];
    //bool* boolPtr = Arr;
    //int* IntPtr = reinterpret_cast<int*>(boolPtr);


    // 내용은 쉬운내용인데.
    // 정말정말정말 중요합니다.
    // printf_s()
    
    // 이 메모리 영역은 비트적 상수성을 지키겠다.

    // 컴파일러의 옵션에 따라
    // 아예 상수로 대체될수도 있다.
    // const int Value = 0;
    // 0 = 20;
    // 문법적 의미고
    // 사용하는 프로그래머들끼리는 굉장히 중요한 의미가 되는데.

    // 지역변수중에 const가 안붙은 녀석은
    // 스택에 생깁니다.
    // 지역변수중에서 const가 붙은 녀석은
    // 컴파일러에 따라서 상수가 될수도 있고
    // 스택에 만들어질수도 있다.
    char Arr[10] = "aaaaa";
    const char* CPtr = Arr;
    char* NPtr = Arr;
    // const가 붙어있지 않은 참조형 자료형에
    // const를 붙일수는 있다.
    // const가 붙어있는 참조형 자료형에
    // const를 뗄수는 없다.
    // char* NPtr2 = CPtr;


    // const가 없던 애한테 const 붙여서 내부에서 이용하는 겁니다.
    int Count = StringCount(Arr);
    // int Count = StringCount("BBBBB");


    int MonsterHp = 50;

    // Damage(&MonsterHp, 10);


    std::cout << "Hello World!\n";
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
