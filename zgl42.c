#include<stdio.h>
#include<time.h>
void mydelay(double t);
int main()
{
    printf("延迟两秒\n");
    mydelay(2.0);
    printf("两秒结束\n");
    return 0;
}
void mydelay(double t)
{
    clock_t start=clock();
      clock_t end=start+(clock_t)(t*CLOCKS_PER_SEC);
    while(clock()<end);
}