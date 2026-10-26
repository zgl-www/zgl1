#include<stdio.h>
int main()
{
// 2.一年大约有 3.156*10^7秒。编写一个程序，提示用户输入年龄，然
//     后显示该年龄对应的秒数
int year;
    scanf("%d",&year);
    double time=3.156e7;
    printf("%lf",year*time);
    return 0;

}