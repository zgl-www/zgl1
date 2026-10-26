#include<stdio.h>
int main()
{
    // 3.在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，
    //1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
    //思考对于该程序，为何使用浮点类型比整数类型更合适
     printf("请输入杯数：\n");
    double cup;
    scanf("%lf",&cup);
    double pint=cup/2;
    double ounce=cup*8;
    double tablespoon=ounce*2;
    double teaspoon=tablespoon*3;
    printf("品脱：%lf\n",pint);
    printf("盎司：%lf\n",ounce);
    printf("大汤勺：%lf\n",tablespoon); 
    printf("茶勺：%lf\n",teaspoon);
    return 0;
}