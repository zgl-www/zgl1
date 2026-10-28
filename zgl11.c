#include<stdio.h>
int main()
{
    //4. 使用嵌套循环，按下面的格式打印字母：
    //A
    //BC
    //DEF
    //GHIJ
    //KLMNO
    //PQRSTU
    int n=6;
    char c='A';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}