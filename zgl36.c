#include<stdio.h>
typedef struct name{
    char first[20];
    char last[20];
}N;
typedef struct student{
    N n;
    double grade[3];
    double avg;
}stu;
#define CSIZE 4
int main()
{
    stu person[4]={
        {{"john","Done"}},
        {{"john","Don"}},
        {{"john","Do"}},
        {{"john","D"}}
    };
    for(int i=0;i<CSIZE;i++)
    {
        scanf("%lf%lf%lf",&person[i].grade[0],&person[i].grade[1],&person[i].grade[2]);
        person[i].avg=(person[i].grade[0]+person[i].grade[1]+person[i].grade[2])/3.0;
    }
    double num=0;
    for(int i=0;i<CSIZE;i++)
    {
        printf("%s %s ",person[i].n.first,person[i].n.last);
        for(int j=0;j<3;j++)
        {
            printf("%.2lf ",person[i].grade[j]);
        }
        printf("%.2lf\n",person[i].avg);
        num+=person[i].avg;
    }
    printf("%.2lf\n",num/4.0);
    return 0;
}