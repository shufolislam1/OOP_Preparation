#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int salary;

public:
    // Setter
    void setSalary(int empSalary)
    {
        salary = empSalary;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee emp1;
    emp1.setSalary(50000);
    cout << emp1.getSalary() << endl;

    return 0;
}
