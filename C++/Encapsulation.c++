#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// class Employee 的屬性 salary 為 private，如果要取得的話可以在同一個類別中，提供 public get & set methods。
class Employee
{

private:
    int salary; // private attribute

public:
    // setter
    void setSalary(int s)
    {
        salary = s;
    }
    // getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    // 建立物件
    Employee myObj;
    myObj.setSalary(1000);          // set salaray value
    int salary = myObj.getSalary(); // get salary value

    cout << salary << "\n";

    return 0;
}