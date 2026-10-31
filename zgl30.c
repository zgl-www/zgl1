#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
     srand(time(NULL));
     int res;
     int num[100];
     for(int i=0;i<100;i++)
     {
        res=rand()%10+1;
        num[i]=res;
     }
     for(int i=0;i<99;i++)
     {
          for(int j=i+1;j<100;j++)
          {
            if(num[i]<num[j])
            {
                int temp=num[i];
            num[i]=num[j];
                num[j]=temp;
            }
          }
     }
     for(int i=0;i<100;i++){
        printf("%d ",num[i]);
     }
    return 0;
}