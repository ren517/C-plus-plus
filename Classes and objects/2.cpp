#include <iostream>
using namespace std;
// 构造函数和析构函数

class Person
{
public:
    Person()
    {
        cout << "Person 构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }
};

void test01()
{
    Person p;
}
int main(void)
{
    test01();
    return 0;
}