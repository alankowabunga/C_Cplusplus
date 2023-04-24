#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

int sum(int a, int b)
{
    // 這裡的 a,b 是形式上的參數，參數也要配上適當的資料型態 data type
    return a + b;
}

int main()
{
    sum(4, 2); // 這裡的 4,2 為實際參數 argument(也稱為引數)，實際的數值由此輸入
}

void function(string city = "Taipei")
// 形式參數 city 預設為 "Taipei"
{
    cout << city << endl;
}
int main()
{
    function();
    // 沒有給實質參數(引數)，因此使用預設參數輸出 Taipei
}

// 函式多載 Overloading
int Volumn(int s)
{
    return s * s * s; // 立方體的體積
}

double Volumn(double r, int h)
{
    return 3.14 * r * r; // 圓面積
}

long Volumn(long l, int b, int h)
{
    // return l*b*h;
}

int main()
{
    std::cout << Volumn(10);
    std::cout << Volumn(2.5, 8);
    std::cout << Volumn(10, 75, 15);
}