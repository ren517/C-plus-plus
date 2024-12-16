#include <iostream>
using namespace std;

// 拷贝构造函数

class Person
{
public:
    int age;
    Person()
    {
        cout << "Person的无参构造函数调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person的有参构造函数的调用 " << endl;
    }
    // 拷贝
    Person(const Person &p)
    {
        age = p.age;
        cout << "Person的有参构造函数的调用" << endl;
    }

    // 析构函数
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }
};

void test1()
{
    // 1.括号法 常用
    Person p1; // 默认构造函数调用
    Person p2(10);
    Person p3(p2);
    // 注意 调用默认构造函数时，函数不要加()
    cout << "p2的年龄为" << p2.age << endl;

    cout << "p3的年龄为" << p3.age << endl;
    // 2.显示法
    Person p4;
    Person p5 = Person(10);
    Person p6 = Person(p2);

    Person(10); // 匿名对象 当执行结束后，系统会清除
    // Person(P7),不能初始化匿名对象   会认为是Person(P7) == Person P7
    //  3.隐式转换法
    Person P8 = 10; // 等价于Person p8(10);有参构造
    Person p9 = P8; // 拷贝构造
}
int main(void)
{
    test1();
    return 0;
}