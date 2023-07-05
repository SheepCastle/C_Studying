#include <iostream>
#include <string>
using namespace std;

class String {
public:
    String() {
        strData = NULL;
        len = 0;
    }
    String(const char *str) {
        len = strlen(str);
        strData = new char[len + 1];
        strcpy(strData, str); // 깊은 복사
    }
    ~String() { // 소멸자 작성
        if (strData != NULL) {
            delete[] strData;
        }
    }

    const char *GetStrData() const {
        if (strData != NULL) return strData;
        return "";
    }
    int GetLen() const {
        return len;
    }

private:
    char *strData;
    int len;
};

int main() {
    String s1;
    String s2("Hello");

    cout << s1.GetLen() << endl;
    cout << s1.GetStrData() << endl;
    cout << s2.GetLen() << endl;
    cout << s2.GetStrData() << endl;
}