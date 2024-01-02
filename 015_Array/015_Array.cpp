// 015_Array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 몬스터가 100여야 한다고 치면
    // 퀘스트가 100라고 치면 아래와 같이 선언해야 하느냐?
    //int MonsterHp0;
    //int MonsterHp1;
    //int MonsterHp2;
    //... 
    //int MonsterHp99;

    // int[] <= int 배열형이라고 부릅니다.

    {
        // 첫번째
        // [][][][] [][][][] [][][][] [][][][] [][][][]
        // 모든 변수는 붙어있게 됩니다.
        int MonsterHps[5] = { 11, 22, 33, 44, 55 };

        // 제로베이스라고 하고 
        int MonsterHp1 = MonsterHps[0];
        int MonsterHp2 = MonsterHps[1];
        int MonsterHp3 = MonsterHps[2];
        int MonsterHp4 = MonsterHps[3];
        int MonsterHp5 = MonsterHps[4];

        int Monster;
        // int RefM = Monster;
        int* ptr = &Monster;

        // Ref == MonsterHps[0]
        // int& Ref = MonsterHps[0];

        __int64 Address0 = reinterpret_cast<__int64>(&MonsterHps[0]);
        __int64 Address1 = reinterpret_cast<__int64>(&MonsterHps[1]);
        __int64 Address2 = reinterpret_cast<__int64>(&MonsterHps[2]);
        __int64 Address3 = reinterpret_cast<__int64>(&MonsterHps[3]);
        __int64 Address4 = reinterpret_cast<__int64>(&MonsterHps[4]);

        int a = 0;
    }


    {
        // 첫번째
        // [][][][] [][][][] [][][][] [][][][] [][][][]
        // 모든 변수는 붙어있게 됩니다.
        int MonsterHps[5] = { 11, 22, 33, 44, 55 };

        // int*    int[]
        // 배열이 사용할수 있는 문법은
        // 포인터도 사용할수 있습니다.
        // 포인터의 핵심연산중 하나인 주소이동
        // 타주소 참조.
        // 100번지  시작주소가 100번지
        int* Ptr = MonsterHps;

        // Ptr == 100번지
        // Ptr + 1 == 100번지 + (sizeof(int) * 1) 번지
        // Ptr + 2 == 100번지 + (sizeof(int) * 2) 번지
        // Ptr + 3 == 100번지 + (sizeof(int) * 3) 번지
        // Ptr + 4 == 100번지 + (sizeof(int) * 4) 번지

        // int* + 정수 => int*
        // Ptr + 0

        //int* Ptr0 = Ptr + 0;
        //int* Ptr1 = Ptr + 1;
        //int* Ptr2 = Ptr + 2;
        //int* Ptr3 = Ptr + 3;
        //int* Ptr4 = Ptr + 4;

        //int MonsterHp1 = *Ptr0;
        //int MonsterHp2 = *Ptr1;
        //int MonsterHp3 = *Ptr2;
        //int MonsterHp4 = *Ptr3;
        //int MonsterHp5 = *Ptr4;

        int MonsterHp1 = *(Ptr + 0);
        int MonsterHp2 = *(Ptr + 1);
        int MonsterHp3 = *(Ptr + 2);
        int MonsterHp4 = *(Ptr + 3);
        int MonsterHp5 = *(Ptr + 4);


        __int64 Address0 = reinterpret_cast<__int64>(Ptr + 0);
        __int64 Address1 = reinterpret_cast<__int64>(Ptr + 1);
        __int64 Address2 = reinterpret_cast<__int64>(Ptr + 2);
        __int64 Address3 = reinterpret_cast<__int64>(Ptr + 3);
        __int64 Address4 = reinterpret_cast<__int64>(Ptr + 4);


        int a = 0;
    }

    {
        // 첫번째
        // [][][][] [][][][] [][][][] [][][][] [][][][]
        // 모든 변수는 붙어있게 됩니다.
        int MonsterHps[5] = { 11, 22, 33, 44, 55 };

        // int*    int[]
        // 배열이 사용할수 있는 문법은
        // 포인터도 사용할수 있습니다.
        // 포인터의 핵심연산중 하나인 주소이동
        // 암시적 형변환.
        //  int*     int[]
        // 이건 그냥 이럴수 있다.
        int* Ptr = MonsterHps;

        int MonsterHp1 = Ptr[0];
        int MonsterHp2 = Ptr[1];
        int MonsterHp3 = Ptr[2];
        int MonsterHp4 = Ptr[3];
        int MonsterHp5 = Ptr[4];

        //int MonsterHp1 = *(Ptr + 0);
        //int MonsterHp2 = *(Ptr + 1);
        //int MonsterHp3 = *(Ptr + 2);
        //int MonsterHp4 = *(Ptr + 3);
        //int MonsterHp5 = *(Ptr + 4);

        int a = 0;
    }

    {
        int MonsterHps[5] = { 11, 22, 33, 44, 55 };
        //  포인터 != 배열
        int* Ptr = MonsterHps;

        int ArrSize = sizeof(MonsterHps);
        int PtrSize = sizeof(Ptr);

        int a = 0;
    }


    // int MonsterHp = 100;

}
