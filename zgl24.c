#include<stdio.h>
int num_index(int *num,int size);
int main()
{
    //编写一个函数，返回储存在int类型数组中最大值的下标，并在一个简单的程序中测试该函数。
    int num[5]={1,2,3,4,5};
    int res=num_index(num,5);
    printf("%d\n",res);
    return 0;
}
int num_index(int *num,int size)
{
    int max=num[0];
    int index=0;
    for(int i=0;i<size;i++)
    {
      if(max<num[i])
      {
        max=num[i];
        index=i;
      }
    }
    return index;
}
