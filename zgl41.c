#include<stdio.h>
#define TAVG(x,y) (2.0/(1.0/(x)+1.0/(y)))
int main()
{
     int a,b;
     scanf("%d%d",&a,&b);
     printf("%.2f\n",TAVG(a,b));
    return 0;
}