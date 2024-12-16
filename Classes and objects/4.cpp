#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person无参构造函数的调用" << endl;
    }
    int age;
    Person(int a)
    {
        age = a;
        cout << "Person有参构造函数的调用" << endl;
    }
    Person(const Person &P)
    {
        age = P.age;
        cout << "Person拷贝构造函数的调用" << endl;
    }
    ~Person()
    {
        cout << "Person析构函数的调用" << endl;
    }
};

void test01()
{
    Person P2(20);
    Person P3(P2);
}

// 值传递方式给函数参数传值

void Dowork(Person P)
{
}

void test02()
{
    Person P;
    Dowork(P);
}

// 值方式返回局部对象

Person Dowork1()
{
    Person P1;
    return P1;
}

void test03()
{
    Person p = Dowork1();
}

int main(void)
{
    // test01();
    // test02();
    test03();

    return 0;
}