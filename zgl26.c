#include<stdio.h>
char* get_new();
int main()
{
    //11.1
    char* p=get_new();
    printf("%s\n",p);
    return 0;
}
char* get_new()
{
    static char c[100];
    int n;
    scanf("%d",&n);
    getchar();
    fgets(c,n,stdin);
    return c;
}