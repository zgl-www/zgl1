#include<stdio.h>
int main()
{
    //5. 编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
    //A
   //ABA
  //ABCBA
 //ABCDCBA
//ABCDEDCBA
      char c;
      scanf("%c",&c);
        for(int i=0;i<c-'A'+1;i++)
        {
            for(int j=0;j<c-'A'-i;j++)
            {
                printf(" ");
            }
            for(int j=0;j<=i;j++)
            {
                 printf("%c",j+'A');
            }
            for(int j=0;j<i;j++)
            {
               printf("%c",i+'A'-j-1);            
            }
            printf("\n");
        }
    return 0; 0;
}