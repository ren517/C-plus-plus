#include <iostream>
using namespace std;

class Person
{
public:
    // 成员函数重载加号
    //  Person operator+(Person &p)
    //  {
    //      Person temp;
    //      temp.m_A = this->m_A + p.m_A;
    //      temp.m_B = this->m_B + p.m_B;
    //      return temp;
    //  }

    int m_A;
    int m_B;
};

// 全局函数重载
Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_B;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

Person operator+(Person &p1, int num)
{
    Person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_B + num;
    return temp;
}
void test()
{
    Person P1;
    P1.m_A = 10;
    P1.m_B = 10;

    Person P2;
    P2.m_A = 10;
    P2.m_B = 10;

    Person Psum;
    // 成员函数重载的本质调用
    // Psum = P1.operator+(P2);
    // Psum = P1 + P2; // 通用写法   全局函数与成员函数重复重载会报错
    // 全局函数的重载本质调用
    Psum = operator+(P1, P2);
    cout << Psum.m_A << endl;
    cout << Psum.m_B << endl;

    Person P4;
    P4 = Psum + 100;
    cout << P4.m_A << endl;
    cout << P4.m_B << endl;
}
int main(void)
{
    test();
    return 0;
}