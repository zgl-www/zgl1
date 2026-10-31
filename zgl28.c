#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    //11.13
    for(int i=1;i<=(argc-1)/2;i++)
    {
        char* temp=argv[i];
        argv[i]=argv[argc-i];
        argv[argc-i]=temp;
    }
    for(int i=1;i<argc;i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}