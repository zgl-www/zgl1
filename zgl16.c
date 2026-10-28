#include<stdio.h>
int main()
{
    //3. 使用 if else 语句编写一个程序读取输入，读到#停止。
    //用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
    int count=0;
    char c;
    while(scanf("%c",&c))
    {
    if(c=='#'){
        break;
    }
        switch(c)
        {
            case '.':
                printf("!");
                count++;
                break;
            case '!':
                printf("!!");
                count++;
                break;
            default:
                printf("%c",c);
        }
    }
    printf("%d\n", count);
    return 0;
}