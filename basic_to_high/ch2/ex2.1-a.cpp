#include <iostream>
struct A
{
    intx;
};

int main()
{
    // 변수에 int 타입의 10을 초기화하여 대입
    // 이것은 (int)10처럼 캐스트 한 것과 같음
    // int{10}도 같은 결과
    int a = int(10);
    std::cout << "a=" << a << "\n";

    // 0 값으로 초기화됨
    int a1 = int();

    // gcc: 에러 발생: 단독 타입만 가능
    // MSVC: OK
    int b = unsigned int(10);
    int c = long int(10);

    // 에러 발생: 포인터 타입은 허용치 않음
    int d = int* (10);

    // 클래스 타입을 사용함
    A aa = A();

    return 0
}