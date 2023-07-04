#include <iostream>
using namespace std;

int main() {
    int *a = new int(5); // 변수를 동적으로 할당

    cout << a << endl;
    cout << *a << endl;
    *a = 10;
    cout << a << endl;
    cout << *a << endl;

    delete a;
}