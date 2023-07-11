#include <iostream>
using namespace std;

class Base {
public:
    int a = 10;
};

class Dervide {
public:
    int a = 20;
};

int main() {
    Base b;
    Dervide d;

    cout << b.a << endl;
    cout << d.a << endl;
}