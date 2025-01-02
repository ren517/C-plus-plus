#include <iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, Person &P1);

public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }

private:
    int m_A;
    int m_B;
};

// void operator<<(ostream &cout, Person &P1) // operator<< (cout , p)  简化cout << p
// {
//     cout << "m_A: " << P1.m_A << endl;
//     cout << "m_B: " << P1.m_B << endl;
// }不能链式编程

ostream &operator<<(ostream &cout, Person &P1)
{
    cout << "m_A: " << P1.m_A << " m_B: " << P1.m_B;

    return cout;
}

void test01()
{
    Person P1(10 , 10);

    cout << P1 << endl;
}

int main(void)
{
    test01();

    return 0;
}