#include<stdio.h>
int main()
{
    printf("请输入文件名：\n");
    FILE* fp;
    char filename[100];
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("error");
        return 1;
    }
    char text[1024];
    int n;
    while((n=fread(text,1,1024,fp))!=0)
    {
        text[n]='\0';
        printf("%s",text);
    }
    fclose(fp);
    return 0;
}