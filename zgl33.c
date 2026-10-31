#include<stdio.h>
#include<ctype.h>
int main()
{
   FILE* fp1;
   FILE *fp2;
   fp1=fopen("text1.txt","r");
   fp2=fopen("text2.txt","w");
   char p1[1024];
   char c;
   while((c=getc(fp1))!=EOF)
   {
    putc(toupper(c),fp2);
   }
   fclose(fp1);
   fclose(fp2);
    return 0;
}