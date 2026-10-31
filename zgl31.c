#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    printf("请问需要输入几个单词:\n");
    scanf("%d",&n);
    char** p=(char**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++)
    {
        char c[100];
        scanf("%s",c);
        getchar();
        int res=strlen(c);
        p[i]=(char*)malloc(sizeof(char)*res+1);
        strcpy(p[i],c);
    }
    for(int i=0;i<n;i++)
    {
      printf("%s\n",p[i]);
    }
    for(int i=0;i<n;i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}