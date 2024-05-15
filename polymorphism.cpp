#include <bits/stdc++.h>
using namespace std;

class SU_27A1
{

public:
    void func(string x)
    {
        cout << "Hello " << x << endl;
    }
    void func(string x, string y)
    {
        cout << "Hello " << x << ", " << y
             << endl;
    }
};

int main()
{
    SU_27A1 obj1;

    obj1.func("shufol");
    obj1.func("Riad");
    obj1.func("tanvir", "shahin");
    return 0;
}
