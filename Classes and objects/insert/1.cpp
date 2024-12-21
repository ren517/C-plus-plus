#include <iostream>
using namespace std;
class BasePage
{
public:
    void header() // 页面顶部
    {
        cout << "Unwatch  fork  star  (页面顶部)" << endl;
    }

    void footer() // 页面底部
    {
        cout << "Readme   (页面底部)" << endl;
    }
    void right() // 页面右部
    {
        cout << "Readme Activity star watching forks  (页面右部)" << endl;
    }
};

class C_plus_plus : public BasePage
{
public:
    void content()
    {
        cout << "code C_plus_plus" << endl;
    }
};

class data_structure : public BasePage
{
public:
    void content()
    {
        cout << "code data_structure" << endl;
    }
};

class math : public BasePage
{
public:
    void content()
    {
        cout << "code math" << endl;
    }
};

void test01()
{
    C_plus_plus cpp;
    data_structure da;
    math ma;
    cout << "ren517的github仓库" << endl;
    cout << "C++仓库如下——————————" << endl;
    cpp.content();
    cpp.footer();
    cpp.header();
    cpp.right();
    cout << "data_structure仓库如下——————————" << endl;
    da.content();
    da.footer();
    da.header();
    da.right();
    cout << "math仓库如下——————————" << endl;
    ma.content();
    ma.footer();
    ma.header();
    ma.right();
}
int main(void)
{
    test01();
    return 0;
}