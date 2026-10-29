#include<stdio.h>
int main()
{
    //编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。
    //该程序要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续的。
    //或者使用  ctype.h  库中合适的分类函数更方便。
    char c;
    int count_big=0;
    int count_small=0;
    while((c=getchar())!=EOF)
    {
        if(c>='A'&&c<='Z')
        {
            count_big++;
        }
        else if(c>='a'&&c<='z')
        {
            count_small++;
        }
    }
  printf("%d %d",count_big,count_small);
    return 0;
}