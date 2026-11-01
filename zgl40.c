#include<stdio.h>

unsigned int move(unsigned int num,int n);
 int main ()
{
    unsigned int num=0xf0000001;
    int n;
    scanf("%d",&n);
    unsigned int res=move(num,n);
    printf("0x%x\n",res);
    return 0;
}
unsigned int move(unsigned int num,int n)
{
    int bits=sizeof(unsigned int)*8;
     n%=bits;
    unsigned int res=(num<<n)|(num>>(bits-n));
    return res;
}