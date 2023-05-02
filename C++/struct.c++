#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Declare a structure named "cars"
struct cars
{
    string brand;
    string model;
    int priority;
};

int main()
{
    cars c1 = {"Benz", "C250 coupe", 2};
    cars c2 = {"Bmw", "430i coupe", 1};

    // Print the structure members
    cout << c1.brand << " " << c1.model << " " << c1.priority << " pick! \n";
    cout << c2.brand << " " << c2.model << " " << c2.priority << " pick! \n";

    return 0;
}