#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/*
 the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable

string &meal = food;
=> reference name 'meal' is referring to the food variable

宣告 reference variable沒有有向系統要新的盒子來用, 只是給先前就已經要來的盒子取另外一個名字而已 (alias).
&meal = food
*/

int main()
{
    string food = "Pizza";
    string &meal = food; // create reference variable. 

    cout << food << "\n"; // Outputs Pizza
    cout << meal << "\n"; // Outputs Pizza

    cout << &food << "\n"; // Outputs the memory address of food
    cout << &meal << "\n";//和 food 相同

    return 0;
}