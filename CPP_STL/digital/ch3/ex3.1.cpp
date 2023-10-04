#include <iostream>

// 경험치를 저장할 수 있는 최대 개수
const int MAX_EXP_COUNT = 100;

// 경험치 저장 스택 클래스
class ExpStack
{
public:
    ExpStack()
    {
        Clear();
    }

    // 초기화 한다.
    void Clear()
    {
        m_Count = 0;
    }

    // 스택에 저장된 개수
    int Count()
    {
        return m_Count;
    }

    // 저장된 데이터가 없는가?
    bool IsEmpty()
    {
        return 0 == m_Count ? true : false;
    }

    // 경험치를 저장한다.
    bool push(float Exp)
    {
        // 저장할 수 있는 개수를 넘는지 조사한다.
        if (m_Count >= MAX_EXP_COUNT)
        {
            return false;
        }

        // 경험치를 저장 후 개수를 하나 늘린다.
        m_Data[m_Count] = Exp;
        ++m_Count;

        return true;
    }

    // 스택에서 경험치를 뺀다.
    float pop()
    {
        // 저장된 것이 없다면 0.0f를 반환한다.
        if(m_Count < 1)
        {
            return 0.0f;
        }

        // 개수를 하나 감소 후 반환한다.
        --m_Count;
        return m_Data[m_Count];
    }

private:
    float m_Data[MAX_EXP_COUNT];
    int m_Count;
};

#include <iostream>
using namespace std;

int main()
{
    ExpStack kExpStack;

    cout << "첫번째 게임 종료- 현재 경험치 145.5f" << endl;
    kExpStack.push(145.5f);

    cout << "두번째 게임 종료- 현재 경험치 183.25f" << endl;
    kExpStack.push(183.25f);

    cout << "세번째 게임 종료- 현재 경험치 162.3f" << endl;
    kExpStack.push(162.3f);

    int Count = kExpStack.Count();
    for(int i = 0; i < Count; ++i)
    {
        cout << "현재 경험치->" << kExpStack.pop() << endl;
    }
}