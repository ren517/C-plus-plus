#include <iostream>
using namespace std;
//提供有参构造函数，不提供无参，提供拷贝
//提供拷贝构造函数，不提供有参和无参

class Person
{
public:
    int age;
    Person()
    {
        cout << "Person 构造函数调用" << endl;
    }
    // Person(const Person &P)
    // {
    //     age = P.age;
    //     cout << "Person拷贝构造函数的调用" << endl;
    // }
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }
};

void test01()
{   
    Person P1;
    P1.age = 20;

    Person P2(P1); // 把13-17行代码注释后，也能拷贝构造函数，编译器自动调用 P2.age = P1.age;
    cout << "P2的年龄为 " << P2.age << endl;
}
int main(void)
{
    test01();
    return 0;
}