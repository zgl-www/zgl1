#include<stdio.h>
int main()
{
    //2. 编写一个程序，读取整数直到用户输入 0。
    //输入结束后，程序应报告用户输入的偶数（不包括 0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。
    int num;
    int sum_o=0;
    int count_o=0;
    int sum_j=0;
    int count_j=0;
    while(scanf("%d",&num)){
             if(num%2!=0)
             {
                count_j++;
                sum_j+=num;
             } 
             else if(num%2==0 && num!=0)
             {
                count_o++;
                sum_o+=num;
             }
             else if(num==0)
             {
                break;
             }
    }
    double avg_o=(double)sum_o/count_o;
    double avg_j=(double)sum_j/count_j;
    printf("偶数个数: %d 偶数平均值: %lf\n", count_o, avg_o);
    printf("奇数个数: %d 奇数平均值: %lf\n", count_j, avg_j);
    return 0;
}