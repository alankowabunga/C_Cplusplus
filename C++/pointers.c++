#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/*
和 & reference variable不同的是，pointers儲存的值是變數的地址。

星號 * 有兩種用途:
1. When used in declaration (string* ptr), it creates a pointer variable.
2. When not used in declaration, it act as a dereference operator.

更改 pointer 的值也會同時更改變數的值
*/

int main()
{
    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    cout << ptr << "\n"; // ptr holds the value of food's memory address.

    //  Dereference 解引用運算符: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";

    return 0;
}