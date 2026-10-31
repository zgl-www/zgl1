#include<stdio.h>
#define SIZE 5
 typedef struct name{
          char first[20];
          char mid[20];
          char last[20];
    }N;
    typedef struct person{
        int a;
         N p_name;
    }P;
void p_printf(P* num,int size);
int main()
{
    P num[5]={{1,{"Jone","M","Make"}},
         {2,{"Make","L","Done"}},
         {3,{"Alice","B","Smith"}},
         {4,{"Bob","","Johnson"}},
         {5,{"John","C","Doe"}}
};
    p_printf(num,SIZE);
    return 0;
}
void p_printf(P* num,int size)
{
    for(int i=0;i<size;i++)
    {
       printf("%s,%s",num->p_name.last,num->p_name.first);
    if(num->p_name.mid[0]!='\0')
    {
        printf(" %s.",num->p_name.mid);
    }
    printf(" -- %d\n",num->a);
    num++;
   }
}