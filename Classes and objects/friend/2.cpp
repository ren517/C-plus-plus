#include <iostream>
using namespace std;
#include <string>
class Building;
class Goodfriend
{

public:
    Goodfriend();
    void visit();
    Building *building;
};
class Building
{
    // Goodfriend可以访问本类私有成员
    friend class Goodfriend;

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

void Goodfriend::visit()
{
    cout << "Friend is visit " << building->m_Sittingroom << endl;
    cout << "Friend is visit " << building->m_Bedroom << endl;
}
int main(void)
{
    Goodfriend p1;
    p1.visit();
    return 0;
}