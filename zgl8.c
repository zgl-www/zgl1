#include<stdio.h>
#define fen 60
int main()
{
    //编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
    //使用 #define 或 const 创建一个表示60的符号常量或 const 变量。
    //通过 while 循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
     int minute;
     scanf("%d",&minute);
     while(minute>0)
     {
        printf("%d分钟=%d小时%d分钟\n",minute,minute/fen,minute%fen);
        scanf("%d",&minute);
     } 
     printf("bye\n");
    return 0;
}
