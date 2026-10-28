#include<stdio.h>
int main()
{
    //8. 编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
    //在用户输入非数字之前，程序应循环处理用户输入的每对值。
    double a,b;
    printf("请输入两个浮点数：\n");
    while(scanf("%lf%lf",&a,&b)==2)
    {
        double res=(a-b)/(a*b);
        printf("两数之差除以两数乘积的结果为：%lf\n",res);
    }
    printf("请输入数字\n");
    return 0;
}