#include<stdio.h>
#include<string.h>
typedef struct fly{
    int sizename;
    int res;
    char first[20];
    char last[20];
}F;
int main()
{
    F num[12]={
     {1,1,"John","Done"},
     {2,1,"John","Don"},
     {3,0,"John""Do"},
     {4,0,"John""D"},
     {5,1,"Make""Java"},
     {6,1,"Make""Jav"},
     {7,0,"Make""Ja"},
     {8,1,"Make""J"},
     {9,1,"Alice""Jone"},
     {10,1,"Alice""Jon"},
     {11,1,"Alice""Jo"},
     {12,1,"Alice""J"}
    };
    printf("To choose a function, enter its letter label:\na) Show number of empty seats\nb) Show list of empty seats\nc) Show alphabetical list of seats\nd) Assign a customer to a seat assignment\ne) Delete a seat assignment\nf) Quit\n");
    char c;
    printf("请输入你的选项:\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'b':
        for(int i=0;i<12;i++)
        {
            if(num[i].res==0)
            {
                printf("%d ",num[i].sizename);
            }
        }
        break;
        case 'a':
        int count=0;
        for(int i=0;i<12;i++)
        {
            if(num[i].res==0)
            {
                count++;
            }
        }
        printf("%d",count);
        break;
      case 'c':
      int a=0;
      char p[12][25];
      for(int i=0;i<12;i++)
      {
       if(num[i].res==1)
            {
              strcpy(p[a],num[i].first);
               a++;
            }
      }
      for(int i=0;i<a-1;i++)
      {
        for(int j=i+1;j<a;j++){
        if(p[i][0]>p[j][0])
        {
         char temp[25];
         strcpy(temp,p[i]);
         strcpy(p[i],p[j]);
         strcpy(p[j],temp);
        }
    }
      }
      for(int i=0;i<a;i++)
      {
        printf("%s\n",p[i]);
      }
      break;
      case 'd':
      printf("请问你是否需要分配座位:\n");
      char c;
      scanf("%c",&c);
      if(c=='y')
      {
           for(int i=0;i<12;i++)
        {
            if(num[i].res==0)
            {
               printf("你的座位是:%d\n",num[i].sizename);
               break;
            }
        }
      }
     break;
     case 'e':
     printf("你的编号是什么\n");
     int b;
     scanf("%d",&b);
     num[b].res=0;
    }
    return 0;
}