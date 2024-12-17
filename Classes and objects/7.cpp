#include <iostream>
using namespace std;

class Person
{
public:
    Person(int a, int b, int c) : A(a), B(b), C(c)
    {
    }
    int A;
    int B;
    int C;
};

void test01()
{
    Person P(30, 20, 10);
    cout << "A= " << P.A << endl;
    cout << "B= " << P.B << endl;
    cout << "C= " << P.C << endl;
}
int main(void)
{
    test01();

    return 0;
}