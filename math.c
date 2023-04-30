#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);    //平方根
    double B = pow(2,4);   // 2的4次方
    int C = round(3.14);   // 四捨五入
    int D = ceil(3.14);    // 返回 >= 3.14的最小整數
    int E = floor(3.99);   // 返回 <= 3.14的最大整數
    double F = fabs(-100); // 返回絕對值

    printf("sqrt(squar root):%f",A);
    // -----------------------------------------------

    double aa ;
    double bb ; 
    double cc ;

    printf("Enter a: ");
    scanf("%lf",&aa);

    printf("%lf",aa);
    

    return 0;
}