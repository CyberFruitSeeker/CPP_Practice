// 074_Define.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// #include "파일명" <= 파일치환


// 이것이 코드 치환 디파인이다.
#define TEN 10
// 코드치환 + 전처리정의

// 디파인 매크로 함수
// 이것도 치환이다.
// 뒤처진 문법이며, 지금은 사용하면 안되는 문법
// 왜? 
#define PLUS(Value) Value + Value



#define MsgAssert(TEXT) MessageBoxA(nullptr, "X 크기가 0입니다.", "치명적 에러", MB_OK); assert(false);

int main()
{
    // int Value = TEN;    
    //int Value = 10;

    int Value = PLUS(20);

    // 중첩되어있는 



    std::cout << "Hello World!\n";
}

