#include <iostream>
#include <string> // Include the string library
using namespace std;
// means that we can use names for objects and variables from the standard library.

int main()
{
    cout << "1. Hello World\n";
    cout << "2. I use escape sequence to make new line." << endl;
    cout << "3. and this new line I used 'endl manipulator' with previous one." << endl;

    /*
    沒有引入 standard namespace library，也可以使用 std+::運算子來取得其物件，例如:

    std::cout << "Hello World";
    */

    // Create a string variable
    string fullName;
    cout << "Now type your full name, we're using getline():";
    getline(cin, fullName); // 意思是從 cin 讀取輸入，並放入 fullName變數
    cout << " Your name is: " << fullName;

    string name;
    string greeting = "Hello  ";
    cout << "\nWhat's your name? " << endl;
    cin >> name;
    cout << greeting.append(name) << endl;
    cout << "Using length() function: " << greeting.length()+"\n";

    

    /*
    C 語言要取得字串中 的特定自符，就像在陣列中取值雷同
    string[index]
    */ cout << "The index 1 of greeting is: " << greeting[1] << endl;

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << "true:" << isCodingFun << endl;  // Outputs 1 (true)
    cout << "false:" << isFishTasty << endl; // Outputs 0 (false)

    int num = 10;
    int num2 = 3;
    cout << num << endl;
    cout << "I ate  " << num + num2 << "  apples.\n";

    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;

    return 0;
}