#include<stdio.h>
void rank(double *x,double*y,double*z);
int main()
{
    //编写并测试一个函数，该函数以 3 个 double 变量的地址作为参数
    //把最小值放入第 1 个变量，中间值放入第 2 个变量，最大值放入第 3 个变量。
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        rank(&a,&b,&c);
        printf("%lf %lf %lf",a,b,c);
    return 0;
}
void rank(double *x,double*y,double*z)
{
    if(*x>*y)
    {
        double temp=*x;
        *x=*y;
        *y=temp;
    }
    if(*x>*z)
    {
        double temp=*x;
        *x=*z;
        *z=temp;
    }
    if(*y>*z)
    {
        double temp=*y;
        *y=*z;
        *z=temp;
    }
}