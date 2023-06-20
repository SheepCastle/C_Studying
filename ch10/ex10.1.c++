#include <iostream>

using namespace std;

namespace sheepcastle {
    int n;
    void set() {
        n = 20;
    }
}

namespace google {
    int n;
    void set() {
        n = 30;
    }
}

int main() {
    sheepcastle::set();
    google::set();

    cout << sheepcastle::n << endl;
    cout << google::n << endl;
}