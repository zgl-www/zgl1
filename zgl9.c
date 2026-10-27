#include<stdio.h>
int main()
{
    //编写一个程序，求模运算 moduli 。
    //把用户输入的第1个整数作为求模运算符的第2个运算对象，该数在运算过程中保持不变。
    //用户后面输入的数是第1个运算对象。当用户输入一个非正值时，程序结束。
    int a,b;
    scanf("%d%d",&a,&b);
    while(b>0&&a>0)
    {
        printf("%dmod%d=%d\n",a,b,a%b);
        scanf("%d%d",&b,&a);
    }
     printf("bye\n");
    return 0;
}