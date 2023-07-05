// 코드를 보고 각 물음에 답하세요.

#include <iostream>
using namespace std;

class GameWindow {
public:
    GameWindow();
    GameWindow(int, int);
    // GameWindow(int w, int h);
    // 1번 문제 해결을 위한 코드 추가 부분.
    // int ResizeWindow(int, int); => 아마도 잘못 작성한 부분

    int GetWidth();
    int GetHeight();
    // 1번 문제의 해결을 위해서는 위의 생성자가 아닌 메서드를 정의해줘야 한다.
    void ResizeWindow(const int, const int);

private:
    int width;
    int height;
};

GameWindow::GameWindow() : width(800), height(600) { }
GameWindow::GameWindow(const int w, const int h) {
    ResizeWindow(w, h);
}
// GameWindow::GameWindow(int w, int h) : width(w), height(h) { }

// 문제 1번의 해결을 위해서 함수 작성하는 부분
// GameWindow::ResizeWindow(int w, int h) : width(w), height(h) { } => 이 부분도 아마도 잘못작성한 부분

int GameWindow::GetWidth() { return width; }
int GameWindow::GetHeight() { return height; }
// int GameWindow::ResizeWindow(const int w, const int h) const
// {
//     return 0;
// }
// 1번 문제의 해결을 위해서 함수 작성하는 부분
void GameWindow::ResizeWindow(const int w, const int h) {
    if (w == 0 && h == 0) {
        width = 800;
        height = 600;
    }
    else {
        if (w < 800) width = 800;
        else width = w;

        if (h < 600) height = 600;
        else height = h;
    }
}

int main() {
    GameWindow mainWindow;
    mainWindow.ResizeWindow(1366, 768);
    cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
}

// 1) 위의 GameWindow 클래스에 창 너비와 높이를 매개변수로 받는 ResizeWindow 함수를 추가해 다음 조건과 같이 width와 height의 값을 바꿀 수 있도록 하세요.
// - 들어온 매개변수의 값과 일치하도록 창 크기를 설정할 것.
// - 단, 너비가 800보다 작거나 높이가 600보다 작을 때는 값을 바꾸지 말 것.
// - 단, 너비와 높이 모두 0이 들어올 경우 기본 800X600 크기로 설정할 것.
// 2) GameWindow::GameWindow(int w, int h) 생성자도 마찬가지로 1)의 조건을 만족하도록 수정하세요.
// 3) 작성한 코드에서 상수화가 가능한 부분을 모두 상수화하세요.