#include<stdio.h>
int num=0;
int count();
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",count());
    }
    return 0;
}
int count()
{
    num++;
}