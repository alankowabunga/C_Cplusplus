#include <iostream>
#include <string>
using namespace std;

int main()
{

    /* The foreach Loop
    for (type variableName : arrayName) {}
    */

    int numArray[5] = {1, 2, 3, 4, 5};

    for (int n : numArray)
    {
        cout << n << "\n";
    }
    cout << "Using sizeof() to get the size(bytes) of the array: " << sizeof(numArray) << "\n";
    cout << "Divide per unit to get the length of the array: " << sizeof(numArray)/sizeof(numArray[0]) << "\n";

    return 0;
}