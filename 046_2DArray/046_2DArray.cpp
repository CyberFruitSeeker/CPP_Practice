// 046_2DArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 1차원 배열 방식으로도 초기화가 된다.
    // char Arr[9] = {'0','1','2','3','4','5','6','7','8' };

    // 좀더 명시적인 초기화 방법
    // char Arr[3][4] = { {'0','1','2', '2' },{'3','4','5', '5'},{'6','7','8'}};
    // char Arr[3][4] = { {'0','1','2', 0 },{'3','4','5', 0},{'6','7','8', 0}};
    char Arr[3][4] = { "123", "345", "678"};
    char Test[4] = "111";

    // char* Char = &Arr[0][0];

    __int64 Address0 = reinterpret_cast<__int64>(&Arr[0][0]);
    __int64 Address1 = reinterpret_cast<__int64>(&Arr[0][1]);
    __int64 Address2 = reinterpret_cast<__int64>(&Arr[0][2]);
    __int64 Address9 = reinterpret_cast<__int64>(&Arr[2][1]);
    __int64 Address3 = reinterpret_cast<__int64>(&Arr[0][3]);
    __int64 Address4 = reinterpret_cast<__int64>(&Arr[1][0]);
    __int64 Address6 = reinterpret_cast<__int64>(&Arr[1][2]);
    __int64 Address7 = reinterpret_cast<__int64>(&Arr[1][3]);
    __int64 Address8 = reinterpret_cast<__int64>(&Arr[2][0]);
    __int64 Address10 = reinterpret_cast<__int64>(&Arr[2][2]);
    __int64 Address11 = reinterpret_cast<__int64>(&Arr[2][3]);

    // char Arr  [9];
    // char [9]

    // char [4]형이 [3]개 모여있는 배열이다.
    // Arr       char [3][4]

    // Char Arr[3][4]
    
    // Arr[0]           Arr[1]           Arr[2]
    // char[4]          char[4]          char[4]
    // [00][01][02][03] [10][11][12][13] [20][21][22][23]
    // Arr[0][0]        Arr[1][0]         Arr[2][0]
    // Arr[0][1]        Arr[1][1]         Arr[2][1]
    // Arr[0][2]        Arr[1][2]         Arr[2][2]
    // Arr[0][3]        Arr[1][3]         Arr[2][3]

    // Arr[0]    char [4];

    // Arr[0][0] char;
    Arr[0];

    // [00][01][02][03] 
    // [10][11][12][13] 
    // [20][21][22][23]


    int a = 0;

    // Arr => 100번지
    // '0' => 100번지
    // '1' => 101번지
    // '8' => 108번지

    // 012345678

    // 012
    // 345
    // 678
    
    // ['0']['1']['2'][ 0 ] = "012" => Arr[0]
    // ['3']['4']['5'][ 0 ] = "345" => Arr[1]
    // ['6']['7']['8'][ 0 ] = "678" => Arr[2]
    

    int IntArr[10];
    int* Ptr = IntArr;

    char* Ptr0 = Arr[0];
    char* Ptr1 = Arr[1];
    char* Ptr2 = Arr[2];

    // ['0']['1']['2']['2']['3']['4']['5']['5']['6']['7']['8'][ 0 ]

    printf_s(Ptr0);
    //printf_s(Ptr1);
    //printf_s(Ptr2);

}
