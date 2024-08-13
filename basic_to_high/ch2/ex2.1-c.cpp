#include <iostream>

struct X {};

void SetData(void* value, void* type)
{
    int* v = reinterpret_cast<int*>(value);
    std::cout << "Value = " << *v << std::endl;

    X* x = (reinterpret_cast<X*>(type));
}

struct MyData{
    unsigned int ver;
    unsigned int data;
};

int main()
{
    int val = 100;
    X x;

    SetData(&val, &x); // 출력 Value = 100

    unsigned char buffer[] = {0x00, 0x01, 0x00, 0x00, 0x01, 0xA0, 0xF0, 0x00};
    // 수식이 분명히 캐스트 하는 타입에 맞는 데이터를 가지고 있어야 사용상 문제가 없음
    MyData* da = reinterpret_cast<MyData*>(buffer);
    // MyData* da = (MyData*)buffer;

    std::cout << da->ver; // 출력 256
}