﻿// 041_Constructor.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 초기화
// 클래스 맴버초기화
// 1. 리터럴
// 2. 리스트이니셜라이저
// 3. 맴버이니셜라이저

// 전역변수
int GlobalVar = 10;

class Monster 
{
    // 맴버
private:

    // 아래와 같은 개념이 가지는 상태를
    // 맴버변수라고 부릅니다.
    // 초기화를 하지 않은 것은 굉장히 안좋아한다.
    // 클래스의 맴버변수를 초기화하는 방법이 굉장히 많습니다.
    // 3가지가 있다.

    // 최신 C++의 방식인 리터럴 초기화
    int Hp = 20;
};

class Player
{
public:
    // public인 변수는 배열초기화를 하것처럼 초기화 할수 있는데.
    // 이걸 이니셜라이즈 리스트 초기화 방식이라고 한다.
    // 모든 변수가 public일때만 가능하다.
    // Player NewPlayer = { 10 };
    int Hp = 30;
};

class NPC
{
public:
    // 생성자
    // 맴버함수의 규칙에서 예외가 됩니다.
    // 1. 리턴값이 없다. => 어차피 자기자신을 포함하고 있는 객체를 만들어서 리턴하니까.
    // 2. 생성자는 객체 없이도 호출이 가능하다. 
    // => 모순을 해결해야하는데 그방법으로 생성자는 객체없이도 호출하게 만든것뿐.
    // 3. 무조건 클래스의 이름과 동일해야 한다.
    // => 사용 편의성을 위한 규칙
    // 4. 초기화를 위한 맴버이니셜라이저 문법이라는것을 유일하게 사용할수 있다.
    // => 아래 내용 확인
    // 5. 여러분들이 생성자를 아무것도 만들지 않았다면.
    // 아래와 같은 기본 생성자를 만들어 버린다는 겁니다.
    // 6. 5번을 생각해본다면 어떠한 방식으로든 생성자를 만들었다면
    //    컴파일러가 디폴트 생성자를 만들지 않는다.
    
    // 대입과 초화의 차이를 확실히 이해하셔야 합니다.
    // 맴버이니셜 라이저 문법 생성자() : 맴버이름()
    NPC() : Hp(100), Att(10) // == int()
    {
        // 사용할수있다 => 이미 만들어져 있다.
        // 대입이라고 합니다.
        Hp = 20;
    }

private:
    int Hp;
    int Att;
};

int CreateInt() 
{
    return 0;
}

class Test 
{
public:
    int Value = 10;

    Test()
        // 엔터쳐도 아래쪽으로 의미를 알아서 받아들인다
        // 맴버이니셜라이저 
        : Value(20)
    {

    }
};

int main()
{
    {
        int Value = 10;
        Value = 20;

        Test NewPlayer = Test();

        int a = 0;
    }

    // 메모리가 만들어짐과 동시에 값을 넣어주는 초기화
    int Value = 0;

    // 메모리가 만들어진 이후에 값을 넣어주는 대입
    Value = 0; 

    // 지역변수
    {
        int LocalVar = CreateInt();
    }
    {
        int LocalVar = int();
    }
    {
        int LocalVar = int(10);
    }

    // NPC()함수가 곧 생성자.
    NPC NewNpc0 = NPC();
    NPC NewNpc1 = NPC();
    NewNpc0 = NewNpc1;

    // 지역변수
    Monster NewMonster = Monster();

    Player NewPlayer = { 10 };

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
