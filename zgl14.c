#include<stdio.h>
int main()
{
   //1. 编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
   char c;
   scanf("%c",&c);
   int count_space=0;
   int count_newline=0;
   int count_other=0;
   while(c!='#')
   {
       if(c==' ')
        {
            count_space++;
        }
        else if(c=='\n')
        {
            count_newline++;
        }
        else
        {
            count_other++;
        }
        scanf("%c",&c);
   }
   printf("空格数: %d\n", count_space);
   printf("换行符数: %d\n", count_newline);
   printf("其他字符数: %d\n", count_other);
    return 0;
}