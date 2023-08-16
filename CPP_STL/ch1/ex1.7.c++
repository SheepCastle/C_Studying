#include <iostream>
using namespace std;

class Point {
    int x;
    int y;
public:
    Point (int _x, int _y = 0 ) : x(_x), y(_y) { }
    void Print() const {
        cout << x << ', ' << y << endl;
    }
    void operator++ () {}
    void operator++ (int) {}
};

int main() {
    Point p1(2, 3), p2(2, 3);

    ++p1;

    p2++;

    return 0;
}