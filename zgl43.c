#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void check_printf(int *num,int size,int count);
int main()
{
  int num[10];
  for(int i=0;i<10;i++)
  scanf("%d",&num[i]);
   int len=sizeof(num)/sizeof(int);
   int count;
   scanf("%d",&count);
   check_printf(num,len,count);
}
void check_printf(int *num,int size,int count)
{
     int flag[100]={0};
     for(int i=0;i<size;i++)
     {
         flag[i]=1;
     }
     srand(time(NULL));
     int res;
     for(int i=0;i<count;i++)
     {
         res=rand()%size;
         while(flag[res]==0)
         {
             res=rand()%size;
         }
         printf("%d ",num[res]);
         flag[res]=0;
     }
}
