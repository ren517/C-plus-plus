#include <iostream>
using namespace std;
#include <string>

class Building
{
    friend void Goodfriend(Building *building);

public:
    Building()
    {
        M_Sittingroom = "sittingroom";
        M_Bedroom = "bedroom";
    }
    string M_Sittingroom;

private:
    string M_Bedroom;
};

void Goodfriend(Building *building)
{
    cout << "Goodfriend is visit " << building->M_Sittingroom << endl;
    cout << "Goodfriend is visit " << building->M_Bedroom << endl;
}

int main(void)
{
    Building a;
    Goodfriend(&a);
    return 0;
}