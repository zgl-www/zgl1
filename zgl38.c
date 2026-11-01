#include<stdio.h>
int b_s(char* c);
int main()
{
     char c[25];
     scanf("%s",c);
     int res=b_s(c);
     printf("%d\n",res);
    return 0;
}
int b_s(char* c)
{
    int i=0;
    int sum=0;
    while(c[i]!='\0')
    {
        i++;
    }
   for(int j=0;j<i;j++)
   {
    sum=sum|(c[j]-'0');
    if(j!=i-1)
    {
        sum=sum<<1;
    }
   }
   return sum;
}