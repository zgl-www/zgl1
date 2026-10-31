#include<stdio.h>
char* check(char* p,char* c);
int main()
{
//11.5
char* p="qoisuwbdubewmzxjna";
while(1)
{
    char c;
    scanf("%c",&c);
    getchar();
    char* res=check(p,&c);
}
   return 0;
}
char* check(char* p,char* c)
{
    while(*p!='\0')
    {
        if(*p==*c)
        {
            return c;
        }
        else{
            return NULL;
        }
    }
}