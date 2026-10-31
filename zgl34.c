#include<stdio.h>
int main()
{
    FILE* fp;
    int index;
    char filename[100];
    printf("请输入一个文件名:\n");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    printf("请输入一个位置:");
      if(scanf("%d",&index)!=1||index<0)
      {
        return 1;
      }
      fseek(fp,index,SEEK_SET);
      int c;
      while((c=fgetc(fp))!=EOF&&c!='\n')
      {
        putchar(c);
      }
    return 0;
}