#include<stdio.h>
int main()
{
    //编写并测试 Fibonacci() 函数，该函数用循环代替递归计算斐波那契数。
    int n;
    scanf("%d",&n);
    long long f1=1;
    long long f2=1;
    if(n==1)
    {
           printf("1 ");
    }
    if(n>=2)
    {
        printf("1 1 ");
    }
    for(int i=0;i<n-2;i++)
    {
        long long f=f1+f2;
        printf("%lld ",f);
            f1=f2;
            f2=f;
    }
    
    return  0;
}