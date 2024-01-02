// 040_Struct.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// C++의 입출력헤더라는 겁니다.
// #include <iostream>

// 1. C++에서 struct와 class의 차이를 설명하라

struct Monster
{
    int Value;

//// public: 디폴트 접근제한 지정자가 public이다 
//// 그 이외의 차이점 없음.
//private:
//    int Hp;
//    int Att;
};

// C의 struct와 C++의 struct와 class의 차이를 설명하라.
// c에서의 struct는 데이터의 집합
struct _Monster
{
    // 접근제한 지정자 없음
    int Value;
};

typedef struct _Monster Monster;

typedef struct _Player
{
    // 접근제한 지정자 없음
    int Value;
} Player;

int main()
{
    //Monster NewMonster;
    //NewMonster.Att;
    // 앞으로 배우게될 모든 문법이 struct에도 그냥 적용됩니다.

    // C의 struct
    // public:이다 => 틀린설명 애초에 접근제한 지정자라는 문법이
    // 존재하지 않는다.
    // 이름생략이 불가능해서 struct Monster 그냥 Monster로 표현하지 못한다.

    Monster NewMonster;
    NewMonster.Value = 20;
}
