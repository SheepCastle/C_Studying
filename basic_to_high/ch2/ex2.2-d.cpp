#include <iostream>

void fun() {}

class Myclass{
    int var1;
    int var2;
};

int main()
{
    char var;

    // char 타입인 Type Size = 1 출력됨
    std::cout << "Type Size = " << sizeof var << std::endl;

    int var1[10];

    // int 타입의 배열 10, Type Size = 40 출력됨
    std::cout << "Type Size = " << sizeof var1 << std::endl;

    Myclass var2;

    // 출력 : Type Size = 8. Myclass에서 int 타입의 두 개 멤버를 가지고 있음
    std::cout << "Type Size = " << sizeof(Myclass) << std::endl; // 위의 결과와 동일

    // 에러 발생. 함수타입은 허용되지 않음
    std::cout << "Fun Size = " << sizeof fun;

    std::cout << "Fun Size = " << sizeof(int); // 타입은 괄호를 사용함.
}