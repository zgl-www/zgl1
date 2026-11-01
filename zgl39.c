#include<stdio.h>
int b_s(char* c);
void print_binary(int num);
int main(int argc, char* argv[])
{
     int res1=b_s(argv[1]);
     int res2=b_s(argv[2]);
     res1=~res1;
     res2=~res2;
     print_binary(res1);
     print_binary(res2);
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
void print_binary(int num)
{
    int start=0;
unsigned int nnum=num;
for(int i=31;i>=0;i--)
{
    int bit=(nnum>>i)&1;
    if(bit==1)
    {
        start=1;
    }
    if(start==1)
    {
        printf("%d",bit);
    }

}
printf("\n");
}