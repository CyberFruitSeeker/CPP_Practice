﻿// 052_IncludeEX.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 컴파일에 대해서 이해하고 싶다면

// #pragma once
// 헤더 중복을 파일 단위로 막아준다. 
#include "A.h"
//class A
//{
//public:
//    A();
//};
//
//int A = 10;


#include "B.h"
//#include "B.h"
//#include "B.h"
//#include "B.h"
//#include "B.h"

// A를 만들려면 B가 필요해 
// B가 먼저 컴파일이 되서 완성이 되면
// 그걸 A가 사용한다.

// 컴파일러는 방황한다.
// 이게 순환참조.
// A를 만들려면 B가 필요
// B를 만들려면 A가 필요
// A를 만들려면 B가 필요
// B를 만들려면 A가 필요
// A를 만들려면 B가 필요

// 컴파일의 개념은
// 헤더를 main 함수 위쪽에 전부다 붙이는것.

//class A {
//
//};
//
//class B {
//
//};

int main()
{
    // A NewA;

    int Value0 = GValue;
    int Value1 = GValue;
    //int Value0 = 10;
    //int Value1 = 10;

    std::cout << "Hello World!\n";
}

//class B {
//
//};

// 구현은 main아래 붙이는 것.


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
