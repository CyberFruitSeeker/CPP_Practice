﻿#include <iostream>
#include "Player.h"
#include "Global.h"

// int GValue = 0;

//#include <iostream>
//#include <iostream>

// 전처리기 => 컴파일러 => 어셈블러 => 링커

// 그 와중에 헤더파일 내부에

// 전처리기 핵심사항.
// 주석삭제
// 코드치환 => #include 
// 
// 핵심1. #pragma once (한파일) 내부에서 헤더중복을 막아 준다.
//        다른 파일에서 헤더중복은 그 파일내부에서만 중복이 안된다.
// 핵심2 보통 헤더에서는 최대한 다른 헤더를 추가 안하려고 하는게 좋다.
//       순환참조 A.h 는 B.h는 A.h

// 컴파일러 핵심사항
// 헤더는 컴파일 주체가 아니다.
// .cpp
// 중간컴파일
// .Obj만들기
// 핵심1. 네임맹글링등의 기능등을 이용해서 함수나
//        중간컴파일을 하게 된다.
//        이때 이 컴파일 Cpp 파일 단위로 된다.
//        * 우리눈에 보기에는 같은 이름인데 같은이름이 아닌애들.
//        오버로딩 test(int ) test (bool ) test(int, int)
//        * 그중 가장 중요한게 함수들의 스택에서 실행메모리 크기를 결정.
//        니가 만든 클래스의 크기가 얼만데?
//        알아내서 054_CompileEx.cpp이 결정났다.
//        중간파일 .obj
  
// 어셈블러 핵심.
//       진짜 기계어 코드로 변경한다.

// 링커의 핵심
// 각 Obj파일에서 기계어로 번역된걸
// 모두 1개로 모으기 시작한다.
// 각 Obj 파일들의 기계어 번역을 다 연결해서 1개의 파일로 만들기 시작한다.
// => .exe <= Obj가 아무리 많아도 exe파일은 1개입니다.

// 헤더쪽에 구현이 있는건 굉장히 문제가 생길여지가 더 있기 때문에.
// 최대한 철저하게 
// 선언과 구현을 Header와 Cpp로 분할해야 한다.
// 선언
// 이런 함수가 있어 
// 함수의 구현부를 삭제하고 선언만 놔두면 된다.
// void Test();
// 
// 이런 클래스가 있어
// class Player*
// class Player&
// 클래스 전방선언이라고 한다. 하지만 무조건 참조형이어야 한다.
// 
// 이런 변수가 있어
// extern int Value; <= 초기화 하면 안되고.
// extern int Value = 0; <= 초기화하면 변수로 인정된다.
// 절대로 초기화 하면 안되

int main()
{
    // 자료형의 크기는 바뀌지 않아요.
    // 중요! => 자료형의 크기는 절대로 바뀌지 않아야 한다.
    // int Value = 20;
    // int Arr[Value];

    //int A = 2;
    //int A = 3;

    Player NewPlayer;
    Test NewTest;

    GValue = 30;
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