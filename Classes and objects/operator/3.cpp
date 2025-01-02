#include <iostream>
using namespace std;

class Person
{
public:
    int m_A;

    // 前置++运算符重载
    Person &operator++()
    {
        m_A++;
        return *this;
    }
    // 后置++运算符重载
    Person operator++(int) // int为站位参数 , 区分前置和后置
    {
        Person temp;
        temp = *this;
        return temp;
    }
};

ostream &operator<<(ostream &cout, Person &P1)
{
    cout << "m_A: " << P1.m_A;

    return cout;
}

void test01()
{
    Person P1;
    P1.m_A = 10;

    // cout << ++(++P1) << endl;
    // cout << P1 << endl;

    cout << P1++;
}

// void test02()
// {
//     Person p1;
//     cout << p1++;
//     cout << p1 << endl;
// }

int main(void)
{
    test01();
    return 0;
}