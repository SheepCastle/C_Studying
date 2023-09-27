#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point(int _x = 0, int _y = 0) : x(_x) , y(_y) {}
    void Print() const { cout << x << ", " << y << endl; }
};

int main()
{
    Point pt;
    pt.Print();

    pt = 10; // Point(10, 0) 암시적 생성자 호출
    pt.Print();

    return 0;
}
// 이렇게 생성자를 이용한 형변환을 이용하지 않는다면 명시적 호출만 가능하도록 해야 한다.