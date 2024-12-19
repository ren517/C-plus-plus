#include <iostream>
using namespace std;
#include <string>
class Building;
class Goodfriend
{

public:
    Goodfriend();
    void visit();
    void visit1();
    Building *building;
};
class Building
{
    // Goodfriend可以访问本类私有成员
    friend void Goodfriend::visit();

public:
    Building();
    string m_Sittingroom;

private:
    string m_Bedroom;
};

// 类外写成员函数
Building::Building()
{
    m_Sittingroom = "sittingroom";
    m_Bedroom = "bedroom";
}
Goodfriend::Goodfriend()
{
    building = new Building;
}

// test可访问private,test1不可访问
void Goodfriend::visit()
{
    cout << "Friend is visit " << building->m_Sittingroom << endl;
    cout << "Friend is visit " << building->m_Bedroom << endl;
}

void Goodfriend::visit1()
{
    cout << "Visit is visit " << building->m_Sittingroom << endl;
    // cout << "Friend is visit " << building->m_Bedroom << endl;
}
int main(void)
{
    Goodfriend p1;
    p1.visit();
    p1.visit1();
    return 0;
}