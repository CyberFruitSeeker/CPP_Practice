﻿// 056_inheritanceMemory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

    // 기본적으로 변수를 먼저 선언한다.
    // 생성자 만은 무엇보다 위에 놓는다.
    // 기본적으로는 한 접근제한 지정자에서
    // 변수 => 함수를 놓는다.
    // 유일한 예외는 생성자만은 변수 위에 놓습니다.

class FightUnit 
{
public:
    FightUnit(int Value)
    {
        printf_s("FightUnit 생성자");
    }

    int Att; //8
    int Hp;
    
    void SetTest(int _Test) 
    {
        Test = _Test;
    }

private:
    int Test; //8
    __int64 Test2; //8

    // void Test();
};

class Player : public FightUnit
{
public:
    Player()
        : FightUnit(10)
    {
        Att = 20;

        printf_s("Player 생성자");
    }

    int Level; //8
};

int main()
{
    // 무조건
    Player NewPlayer = Player();

    int A =  sizeof(Player);


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
