#include <iostream>
using namespace std;

class Point {
    int x;
    int y;
public:
    Point (int _x = 0, int _y = 0): x(_x), y(_y) { }
    void Print () const { cout << x << ' , ' << y << endl; }
    const Point operator+(const Point& arg) const {
        Point pt;
        pt.x = this->x + arg.x;
        pt.y = this->y + arg.y;

        return pt;
    }
};