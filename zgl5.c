#include<stdio.h>
#include<string.h>
int main()
{
   //编写一个程序，提示用户输入名和姓，并执行以下操作：
//a. 打印名和姓，包括双引号；
//b. 在宽度为20的字段右端打印名和姓，包括双引号；
//c. 在宽度为20的字段左端打印名和姓，包括双引号；
//d. 在比姓名宽度宽3的字段中打印名和姓。
     char firstName[15]={0};
     char lastName[15]={0};
     printf("请输入名和姓：\n");
    scanf("%s%s",firstName,lastName);
    printf("名:\"%s\" 姓:\"%s\"\n",firstName,lastName);
    printf("名:\"%20s\" 姓:\"%20s\"\n",firstName,lastName);
    printf("名:\"%-20s\" 姓:\"%-20s\"\n",firstName,lastName);
    int size=strlen(firstName)+strlen(lastName)+3;
    printf("名:\"%*s\" 姓:\"%*s\"\n",size,firstName,size,lastName);
    return 0; 
}