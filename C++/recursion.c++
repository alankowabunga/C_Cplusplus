#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum(int num){
    if(num>0){
        return num + sum(num-1);
    }else{
        return 0;
    }
}

int main()
{
// 我要使用遞迴算出 1-10 的總和
    int result = sum(10);
    cout << "result: "<<result<<"\n";

    return 0;
}