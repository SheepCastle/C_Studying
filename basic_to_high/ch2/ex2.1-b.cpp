#include <iostream>

struct MyStruct {};
class MyClass {};

int main()
{
    MyStruct s;
    MyClass c;

    // 출력 형태가 컴파일러별로 다르게 나타날 수 있음. 타입 종류를 보통 타입-id라고
    // 하는데 여기서는 이름으로 출력했는데 gcc에서는 숫자로 표시될 수 있음.
    std::cout << typeid(s).name() << "\n"; // 출력: struct MyStruct
    std::cout << typeid(MyClass).name() << "\n"; // 출력: class MyClass
    if(typeid(s) == typeid(c)) // 변수 간에 타입 비교
    {
        std::cout << "s and c are of the same type." << "\n";
    } else
    {
        std::cout << "s and c are of different types." << std::endl;
    }

    return 0;
}