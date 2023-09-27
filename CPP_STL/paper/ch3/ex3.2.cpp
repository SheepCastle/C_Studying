#include <iostream>
using namespace std;

void Print(int a, int b)
{
    cout << "전역 함수: " << a << ", " << b << endl;
}

struct Functor
{
    void operator () (int a, int b)
    {
        cout << "함수 객체: " << a << ", " << b << endl;
    }
};

int main()
{
    Functor functor;

    Print(10, 20);
    functor(10, 20);

    return 0;
}