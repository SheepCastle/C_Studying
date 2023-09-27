#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
    // 윗줄과 같이 작성한 이유는 explicit을 통해서
    void Print() const { cout << x << ", " << y << endl; }
};

int main()
{
    Point pt;
    pt.Print();

    // pt = 10; // 이런 방식의 암시적 생성자는 호출이 불가능하다.
    pt = Point(10);
    pt.Print();

    return 0;
}
// 암시적 새애성자 형변환을 의도하지 않았다면 "인자를 갖는 생성자는 모두 explicit 생성자로 만드는 것이 좋다."