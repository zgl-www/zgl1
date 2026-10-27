#include<stdio.h>
#include<float.h>
int main()
{
    //编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0f/3.0。
    //分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
    //程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致吗？
    double a=1.0/3.0;
    float b=1.0f/3.0;
    printf("第一次显示：%0.6lf %0.6f\n",a,b);
    printf("第二次显示：%0.12lf %0.12f\n",a,b);
    printf("第三次显示：%0.16lf %0.16f\n",a,b);
    printf("FLT_DIG=%d\n",FLT_DIG);
    printf("DBL_DIG=%d\n",DBL_DIG);
    return 0;
}