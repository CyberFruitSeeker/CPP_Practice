// 048_classMemory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 문제 1 
class A 
{
};

// 문제 2
class B
{
public:
    // 함수는 클래스의 크기에 영향을 주지 않는다.
    // 맴버함수가 어떻게 해석되는지는 곧 알게 될거고.
    void Function()
    {

    }
};

class C
{
public:
    // 비어있는 클래스의 크기가 1이라고
    // 거기에 더해지는게 아니다.
    bool Test;
};

class D
{
public:
    bool Test; // 4
    int Test0; // 4
};

class E
{
public:
    bool Test0; // 1
    // Temp; // 1
    // Temp; // 1
    // Temp; // 1
    int Test1; // 4
    bool Test2; // 1
    // Temp; // 1
    // Temp; // 1
    // Temp; // 1
};

// 함수 인자와 비슷하게 바이트패딩이라고 불리는
// 메모리 정렬법입니다.
class F
{
public:
    bool Test0; // 1
    bool Test1; // 1
    // Temp; // 1
    // Temp; // 1
    int Test2; // 4
};

// 함수 인자와 비슷하게 바이트패딩이라고 불리는
// 메모리 정렬법입니다.
class G
{
public:
    bool Test0; // 1
    bool Test1; // 1
    // Temp; // 1
    // Temp; // 1
    __int64 Test2; // 8
};

// 함수 인자와 비슷하게 바이트패딩이라고 불리는
// 메모리 정렬법입니다.
class H
{
public:
    G Test0; // G크기
    F Test1; // F크기
};

class Test0
{
    bool Test;
};

class Test1
{
    __int64 Test;
};

class I
{
public:
    Test0 Value0; // G크기
    Test1 Value1; // F크기
};

class J
{
public:
    bool Test0;
    int Test1;
    __int64 Test2;
    // 가장 큰 바이트를 찾는다 => 8
};

class K
{
public:
    bool Test0;
    int Test1;
    bool Test2;
    __int64 Test3;
    // 가장 큰 바이트를 찾는다 => 8
};


int main()
{
    // 8바이트 정수
    // 스투룹 스투룹 선생님께서 0바이트를 허용하면
    // 수없이 많은 문법이 무너집니다.
    // 포인터와 배열
    printf_s("A Size = %lld\n", sizeof(A));

    //A NewA[100];
    //A* NewA;
    //NewA + 2;

    printf_s("B Size = %lld\n", sizeof(B));

    printf_s("C Size = %lld\n", sizeof(C));

    printf_s("D Size = %lld\n", sizeof(D));

    printf_s("E Size = %lld\n", sizeof(E));

    printf_s("F Size = %lld\n", sizeof(F));

    {
        F NewF = F();
        __int64 Address0 = reinterpret_cast<__int64>(&NewF.Test0);
        __int64 Address1 = reinterpret_cast<__int64>(&NewF.Test1);
        __int64 Address2 = reinterpret_cast<__int64>(&NewF.Test2);
    }

    printf_s("G Size = %lld\n", sizeof(G));

    printf_s("H Size = %lld\n", sizeof(H));

    printf_s("I Size = %lld\n", sizeof(I));

    {
        J NewJ = J();
        __int64 Address0 = reinterpret_cast<__int64>(&NewJ.Test0);
        __int64 Address1 = reinterpret_cast<__int64>(&NewJ.Test1);
        __int64 Address2 = reinterpret_cast<__int64>(&NewJ.Test2);

        int a = 0;
    }

    printf_s("J Size = %lld\n", sizeof(J));
    printf_s("K Size = %lld\n", sizeof(K));
}
