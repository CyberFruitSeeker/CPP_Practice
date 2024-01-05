// 069_New.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

void Test()
{
    int* Ptr = new int();
}

// Zone안에에는 몬스터가 있어야 한다.
class Monster
{

};

class Zone
{
    Monster Arr[100];
};

// 지금까지 해온 메모리 바인딩을 정적 바인딩이라고 하고
// 내가 원하는 만큼 => 불가능.
// 고정 메모리의 크기를 유동적으로 처리할수가 없다.
// 내 주변만 플레이어의 눈에 보이는 부분들만 처리하면 된다.

// 데이터 영역에 메모리를 사용하는것을 된다.
// 메모리를 바인딩한다고 하는데.
// 정적 바인딩만 확인했다.
int GValue = 10;

int main()
{
    int A;
    // delete A;

    int* Ptr = new int(10);

    // 삭제하는 하는 방법은 아래와 같다.
    delete Ptr;

    int LocalValue = 10;

    //Zone Arr[100]; // 게임 내 전체지역을 시작하자마 100개 만든다 라는 뜻
    // 문제는? : 태초마을만 똑같이 100개 있다.

    // new 연산자를 붙이면 Zone을 하나 생성하겠다.
    //Zone* CurZone = new Zone();

        // Zone은 존재하지 않는다.
    Zone* CurZone = nullptr;


    //if (플레이어가 들어왔다면)
//{
//    어떤때는 만들고 어떤때는 지울수 있다.
//    CurZone = new Zone();
//}

// 어떤때는 지울수도 있다.

// 값형은 문제가 선언하는 순간 메모리가 만들어져 있다는 것이고
// 그 메모리는 스택에 포함된다.
    int Value = 10;

    _getch();

    while (true)
    {
        Test();
    }

}
