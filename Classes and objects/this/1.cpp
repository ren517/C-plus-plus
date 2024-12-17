#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        // this指针指向被调用成员所指的对象
        this->age = age;
    }

    // Person(int m_age)
    // {
    //     age = m_age;
    // }
    // 上下写法均可

    // void Addage(Person &p)
    // {
    //     age += p.age;
    // }不能完成链式编程
    Person &Addage(Person &p) // 注:用Person&
    {
        this->age += p.age;
        return *this;
    }
    int age;
};

void test1()
{
    Person p1(18);
    Person p2(20);
    p2.Addage(p1).Addage(p1).Addage(p1).Addage(p1);
    cout << "P1的年龄为: " << p1.age << endl;
    cout << "P2的年龄为: " << p2.age << endl;
}

int main(void)
{
    test1();
    return 0;
}