//从键盘输入三个浮点数，用三目运算符求出三个数中的最大者，输出。
#include <stdio.h>

float Get_num()
{   float num = 0.0f ;
    printf("请输入一个浮点数");
    scanf("%f",&num );
}
float find_max(float num1, float num2, float num3)
{
    return  (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3) ;

}
int main() {
    float num1 , num2, num3, max;
    num1 = Get_num();
    num2 = Get_num();
    num3 = Get_num();
    max = find_max (num1,num2,num3);
    printf("最大值为：%.2f\n", max);
    return 0 ;
   /* float num1 , num2, num3, max;
    num1 = 0.0f , num2 = 0.0f , num3 = 0.0f ,max = 0.0f ;

    printf("请输入三个浮点数: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    printf("最大的数是: %.2f\n", max);

    return 0;*/
}