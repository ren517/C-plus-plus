#include <iostream>
#include <string>
using namespace std;
class Phone
{
public:
    Phone(string pName)
    {
        m_name = pName;
    }

    string m_name;
};

class Person
{
public:
    Person(string name, string pName) : m_name(name), my_phone(pName) // Phone m_phone = pName
    {
    }

    string m_name;
    Phone my_phone;
};

void test01()
{
    Person p("Jack", "Samsung");
    cout << p.m_name << " use " << p.my_phone.m_name << "." << endl;
}
int main(void)
{
    test01();
    return 0;
}