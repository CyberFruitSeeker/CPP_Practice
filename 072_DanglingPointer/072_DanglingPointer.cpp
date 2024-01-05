// 072_DanglingPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    int Hp;

    void MoverMsg()
    {
        // 포인터를 nullptr인 상태로 사용해야 nullptr 레퍼런스 익셉션이 나오는 것이다.
        // this->Hp = 20;
        // 내부에서 this를 사용했는가?
        printf_s("플레이어가 움직입니다.");
    }
};

void MyDelete(int* _PtrValue)
{
    if (nullptr == _PtrValue)
    {
        return;
    }

    *_PtrValue = 20;

    // 지운다.
    _PtrValue = nullptr;
}

void Test(int Value)
{
    Value = 99999999999999;
}

int main()
{
    _CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

    {
        // new int();

        // 첫번째 금기
        // 500번지   500번지
        int* Ptr = new int();
        // 한곳에 또하지 마라.
        // 600번지   600번지
           // Ptr = new int();

        int* Ptr2 = new int();

        // 

       //  600번지를 지워라.
        delete Ptr;
        delete Ptr2;
    }

    // 방어코드를 쳐라
    // nullptr은 사용할수 없다.
    {
        int* Ptr = nullptr;

        // 0번지에 200을 넣어라.
        // *Ptr   =    200;

        // 지가 지가만든걸 테스트를 안하는 멍청한 프로그래머
        // 테스트 안한상태로 커밋을 올린다고.

        // null 레퍼런스 익셉션

        // 이렇게 바로위에 해줬어도 nullptr체크는 할것이다.
        // int* Ptr = new int();

        // nullptr체크는 그냥 무조건 입니다.
        // 사고를 하면 안됩니다.
        if (nullptr != Ptr)
        {
            *Ptr = 10;
        }

        Player* NewPlayer = nullptr;

        if (nullptr == NewPlayer)
        {
            // return 1;
            // NewPlayer->MoveMsg(/*NewPlayer => this*/);
        }
        // 이건 될까요 안될까요?
        // NewPlayer->MoveMsg(/*NewPlayer => this*/);

    }

    {
        int* Ptr = new int();
        delete Ptr;
        // 지웠으면 nullptr을 넣어주는것.
        // *Ptr = 30; < = 댕글링 포인터라고 합니다.
        //                쓰기 엑세스 오류라고 합니다.
        Ptr = nullptr;

        if (nullptr != Ptr)
        {
            *Ptr = 30;
        }

        int a = 0;

        Test(a);


    }

    // nullptr delete하지 마라.
    {

        int* Ptr = nullptr;
        MyDelete(Ptr);
        // operator delete(Ptr);
        // delete Ptr;

        // 0번지를 사용할수 없는데.
        // safe_delete 형식이라고 하고.
        if (nullptr != Ptr)
        {
            delete Ptr;
            Ptr = nullptr;
        }

    }

}
