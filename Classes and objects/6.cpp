#include <iostream>
using namespace std;
//深拷贝与浅拷贝
class Person
{
public:
    int age;
    Person()
    {
        cout << "Person 构造函数调用" << endl;
    }
    
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }
};

int main(void)
{

    return 0;
}