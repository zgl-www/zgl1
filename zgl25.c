#include<stdio.h>
void copy_size(int *num,int size,int*new_num);
int main()
{
     //使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3～第5个元素拷贝至内含3个元素的数组中。
     //该函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）。
     int num[7]={1,2,3,4,5,6,7};
     int new_num[3];
     copy_size(num,3,new_num);
     for(int i=0;i<3;i++)
     {
        printf("%d\n",new_num[i]);
     }
    return 0;
}
void copy_size(int *num,int size,int *new_num)
{
        for(int i=0;i<size;i++)
        {
               new_num[i]=num[2+i];
        }
}