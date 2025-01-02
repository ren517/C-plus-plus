// 继承好处:减少重复代码
#include <iostream>
using namespace std;
class Base
{
public:
    int m_a;

protected:
    int m_b;

private:
    int m_c;
};

class Son : public Base
{
public:
    int m_d;
};

void test01()
{
    cout << "size of Son " << sizeof(Son) << endl;
}

int main(void)
{
    test01();
    return 0;
}