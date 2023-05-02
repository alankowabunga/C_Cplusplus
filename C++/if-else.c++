#include <iostream>
#include <string>
using namespace std;

int main()
{

    int time = 20;
    if (time < 18)
    {
        cout << "Good day.  ";
    }
    else
    {
        cout << "Good evening.  ";
    }

    /*
    short-hand if else:
    variable = (condition) ? expressionTrue : expressionFalse;
    */
    int squat = 100;
    string result = (squat > 120) ? "not bad." : "need to work harder.";
    cout << result;

    return 0;
}