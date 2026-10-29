#include<stdio.h>
double jp(double x,double y);
int main()
{
    //两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。
    //编写一个函数，接受两个 double 类型的参数，返回这两个参数的调和平均数。
    int a,b;
    scanf("%d%d",&a,&b);
      double res=jp(a,b);
      printf("%lf\n",res);
    return 0;
}
double jp(double x,double y)
{
    double res1=1/x+1/y;
    double res2=2/res1;
    return res2;
}