# C primer Plus(第三章)

## 1.编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。然后，如果系统支持，再打印成p记数法（即十六进制记数法）。按以下格式输出（实际显示的指数位数因系统而异）

Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6

```c
int main()
{
    float a=64.25;
    printf("fixed-point notation:%f\n",a);
    printf("fixed-point notation:%e\n",a);
    printf("fixed-point notation:%a\n",a);
    return 0;
}
```

## 2.一年大约有 3.156*10<sup>7</sup> 秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数

```c
int main()
{
    int year;
    scanf("%d",&year);
    double time=3.156e7;
    printf("%lf",year*time);
    return 0;
}
```

## 3.在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用浮点类型比整数类型更合适

```c

```