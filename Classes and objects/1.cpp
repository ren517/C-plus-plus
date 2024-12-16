#include <iostream>
#include <string>
using namespace std;
// //class代表一个类
// class Circle
// {
// public:
// //public
// //protected
// //private
//     int m_r ;
//     double c()
//     {
//         return 2 * 3.14 * m_r * m_r;
//     }
// };
// int main(void)
// {
//     //通过圆类创建具体对象
//     Circle c1;
//     c1.m_r = 10;

//     cout << "圆的周长为: " << c1.c() << endl;
//     return 0;
// }
class person
{
public:
    string name;

protected:
    string car;

private:
    int cdCard;

public:
    void Setname(string name1)
    {
        name = name1;
        // car = "BMW";
        // cdCard = 4466;
    }
    string Getname()
    {
        return name;
    }
};

int main(void)
{
    person P1; // 实体化具体对象

    string name1 = "jack";
    P1.Setname(name1);
    // P1.car = "aa"; //类外访问不到
    // P1.cdCard = 1233; //类外访问不到
    cout << P1.Getname() << endl;
    //cout << P1.Setname(name1) << endl;
    return 0;
}