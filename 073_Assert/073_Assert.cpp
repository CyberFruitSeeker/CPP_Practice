// 073_Assert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <Windows.h> // 이것은 윈도우 헤더이다. => 플랫폼 헤더
#include <assert.h>

int main()
{
    
    // 사용법만 배워보기
    // 너무 깊게 파고들지는 말고, 그냥 이렇게만 써보기
    MessageBoxA(nullptr, "X 크기가 0입니다.", "치명적 에러", MB_OK);
    assert(false);



    //std::cout << "Hello World!\n";
}

