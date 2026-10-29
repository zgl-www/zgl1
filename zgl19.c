#include<stdio.h>
#define A "$8.75/hr"
#define B "$9.33/hr"
#define C "$10.00/hr"
#define D "$11.20/hr"
#define E "quit"
int main()
{
    //让程序可以给出一个供选择的工资等级菜单。
    //使用 switch 完成工资等级选择。运行程序后，显示的菜单应该类似这样：
    //如果选择 1～4 其中的一个数字，程序应该询问用户工作的小时数。
    //程序要通过循环运行，除非用户输入 q。
    //如果输入 1～4和q 以外的数字，程序应提醒用户输入正确的选项，然后再重复显示菜单提示用户输入。
    //使用#define 创建符号常量表示各工资等级。
     char c;
     while(1)
     {
        printf("************************************************************\n");
        printf("1.%s              2.%s\n",A,B);
        printf("3.%s              4.%s\n",C,D);
        printf("q.%s\n",E);
        printf("************************************************************\n");
        scanf("%c",&c);
        getchar();
        int h;
        switch(c)
        {
            case '1':
            printf("工作小时数？\n");
            scanf("%d",&h);
            printf("%lf",8.75*h);
            break;
            case '2':
            printf("工作小时数？\n");
            scanf("%d",&h);
            printf("%lf",9.33*h);
            break;
            case '3':
            printf("工作小时数？\n");
            scanf("%d",&h);
            printf("%lf",10.00*h);
            break;
            case '4':
            printf("工作小时数？\n");
            scanf("%d",&h);
            printf("%lf",11.20*h);
            break;
            case 'q':
            return 0;
            default:
            printf("请输入正确的选项\n");
            break;
        }
        if((c<'1'||c>'4')&&c!='q')
        {
            continue;
        }
        else{
            return 0;
        }
     }

    return 0;
}