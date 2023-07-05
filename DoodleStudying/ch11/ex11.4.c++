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
    String(const String &rhs) { // 복사 생성자
        len = rhs.len;
        strData = new char[len + 1];
        strcpy(strData, rhs.strData);
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
    String s1("Hello");
    String s2 = s1; // String s2(s1); 과 같은 말. 복사 생성자가 호출된다.

    cout << s1.GetStrData() << endl;
    cout << s2.GetStrData() << endl;
}