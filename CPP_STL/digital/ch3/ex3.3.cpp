#include <iostream>

const int MAX_COUNT = 100;

template<typename T>
class Stack
{
public:
    Stack()
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

    // 데이터를 저장한다.
    bool push(T data)
    {
        // 저장 할 수 있는 개수를 넘는지 조사한다.
        if(m_Count >= MAX_COUNT)
        {
            return false;
        }

        // 저장한 개수를 하나 늘린다.
        m_aData[m_Count] = data;
        ++m_Count;

        return true;
    }

    // 스택에서 빼낸다.
    T pop()
    {
        // 저장된 것이 없다면 0을 반환한다.
        if(m_Count < 1)
        {
            return 0;
        }

        // 개수를 하나 감소 후 반환한다.
        --m_Count;
        return m_aData[m_Count];
    }

private:
    T m_aData[MAX_COUNT];
    int m_Count;
};

#include <iostream>
using namespace std;

int main()
{
    Stack<double> kStackExp;

    cout << "첫번째 게임 종료- 현재 경험치 145.5f" << endl;
    kStackExp.push(145.5f);

    cout << "두번째 게임 종료- 현재 경험치 183.25f" << endl;
    kStackExp.push(183.25f);

    cout << "세번째 게임 종료- 현재 경험치 162.3f" << endl;
    kStackExp.push(162.3f);

    int Count = kStackExp.Count();
    for(int i = 0; i < Count; ++i)
    {
        cout << "현재 경험치->" << kStackExp.pop() << endl;
    }

}