#include <bits/stdc++.h>
using namespace std;
class vehicle
{
public:
    string car_name;
    void build()
    {
        cout << car_name << " is building" << endl;
    }
};
class bmw : public vehicle
{
public:
    bmw(string car_name)
    {
        this->car_name = car_name;
    }
};
int main()
{
    bmw obj("bmw");
    obj.build();
}