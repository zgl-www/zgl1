#include<stdio.h>
int main()
{
    //设计一个程序，统计在文件结尾之前的字符数
    int count=0;
    char c;
    while((c=getchar())!=EOF)
    {
        if(c!='\n')
        {
            count++;
        }
    }
    printf("字符数:%d\n", count);
    return 0;
}