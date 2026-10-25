# 本周学习内容

## 1.对编程而言,可移植性意味着什么

- 可以随系统的迭代而不受或少受影响。
- 与底层硬盘联系紧密。
- 可以随时系统（windows，mac，linux）的变化不受或说少受影响。
- 可移植性能增强写代码的灵活性，让代码在不同环境下不受大的影响。

## 2.解释源代码文件、目标代码文件和可执行文件有什么区别

- 源代码就是在编译器人为写的代码扩展名是.c，目标代码文件是把源代码翻译成计算机能懂的语言在windows中扩展名为.obj,linux中为.o，可执行文件就是链接器把目标代码和自带的库函数文件，启动代码拼接在一起。

## 3.编程题

- 你刚被MacroMuscle有限公司聘用。该公司准备进入欧洲市场，需要一个把英寸单位转换为厘米单位（1 英寸=2.54 厘米）的程序。该程序要提示用户输入英寸值。你的任务是定义程序目标和设计程序（编程过程的第1步和第2步）。

```c
//第一步定义目标：用乘法做一个单位转换，在屏幕上输出转换后的结果
//第二步：设计程序
#include<stdio.h>
int main()
{
    double inch;
    scanf("%lf",inch);
    double cm;
    cm=inch*2.54;
    printf("%d",cm);
}
```

## 4.对于求三元方程组解集问题的降低时间复杂度方法

### 求x+2\*y+5\*z=100,x+y+z=50求所用组解(从O(N<sup>3</sup>)降到O（N)）

- 一般思路是用三重循环求所有解。
- 下面展示两重循环与一个for循环求解。

1.对两个方程式进行作差，得y+4*z=50,通过两重循环得到y，z，再用x+y+z=50求x(x
,y,z均大于等于0)。

```c
int main()
{
    int x,y,z;
    for(y=0;y<=50;y++)
    {
        for(z=0;z<=12;z++)
        {
           if(y+4*z==9&&y+z<=50)
           {
            x=50-y-z;
            printf("%d %d %d",x,y,z);
           }
        }
    }
    return 0;
}
```

2.在1的基础上再进行消元将y，x都用z表示，y=50-4\*z，x=3*z.

```c
int main()
{
    int x,y,z;
    for(z=0;z<=12;z++)
    {
       y=50-4\*z;
       x=3*z;
       printf("%d %d %d",x,y,z);
    }
    return 0;
}
```

- 还有利用双指针降低时间复杂度
- 例：求一个数组中两数之和等于目标值（O（N<sup>2</sup>）降到O（N）,对于升序排列的数组）

```c
int main()
{
    int target;
    scanf("%d",&target);
    int nums[]={1,2,3,4,5,6};
    int len=sizeof(nums)/sizeof(int);
    int left=0,right=len-1；
    while(left<right)
    {
        if(nums[left]+nums[right]>target)
        {
            right--;
        }
        else if(nums[left]+nums[right]<target)
        {
            left++;
        }
        else
        {
            printf("%d %d",left+1,right+1);//找到第几个数字
            return 0;
        }
    }
    printf("no");
    
    return 0;
}
```

## 5.内存分布

- 内存由栈，堆，初始化静态区（.data段），未初始化静态区(.bss段)，代码区，常量区。
- 由malloc开辟的动态内存在堆上，栈区上存放的是程序的运行数据（例：局部变量，函数参数等），据全局变量（static）在初始化静态区（.data段）或未初始化静态区(.bss段)，未初始化静态区中的变量值初始化为0,还有常量区（例如char*str=“abc”就在常量区不可修改）。
- 每次调用函数都会开辟一个栈帧（一块空间），一个函数返回时，栈帧销毁，也就是变量的生命周期结束，在堆上一般自己释放后变量的生命周期才结束。
- 代码区存放程序编译后的机器指令。
- 栈一般很小，堆很大根内存有关，手动开辟动态内存可以最大化利用内存。
- 但申请的内存过多导致内存条不足时，就会在硬盘上挪用一块放这段内存（虚拟内存），直到需要用这段内存才会重新回到内存条上，但永远在堆上。
- 栈的生长方向：从高地址（栈底）到低地址（栈顶）生长。
- 堆的生长方向：刚好和栈相反从低地址到高地址生长。

## 6.1. 编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。再调用一次 printf()函数，把你的姓名分别打印在两行。然后，再调用两次 printf()函数，把你的姓名打印在一行。输出应如下所示（当然要把示例的内容换成你的姓名）：

Gustav Mahler      ←第1次打印的内容
Gustav             ←第2次打印的内容
Mahler             ←仍是第2次打印的内容
Gustav Mahler      ←第3次和第4次打印的内容

```c
int main()
{
    printf("wang zhenao\n");
    printf("wang\nzhenao");
    printf("\n");
    printf("wang ");
    printf("zhenao");
    return 0;
}

```

## 7. 编写一个程序，生成以下输出：

Brazil, Russia, India, China
India, China,
Brazil, Russia

除了 main()以外，该程序还要调用两个自定义函数：一个名为 br()，调用一次打印一次“Brazil, Russia”；另一个名为 ic()，调用一次打印一次“India, China”。其他内容在 main()函数中完成。
```c
void br()
{
    printf("Brazil, Russia");
}
void ic()
{
    printf("India, China");
}
int main()
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    return 0;
}
```

## 8. 在 C 语言中，函数可以调用另一个函数。编写一个程序，调用一个名为 one_three() 的函数。该函数在一行打印单词“one”，再调用第2个函数 two()，然后在另一行打印单词“three”。two()函数在一行显示单词“two”。main()函数在调用 one_three()函数前要打印短语“starting now:”，并在调用完毕后显示短语“done!”。因此，该程序的输出应如下所示：

starting now:
one
two
three
done!

```c
void two()
{
    printf("two\n");
}
void one_three()
{
printf("one\n");
two();
printf("three\n");
}
int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!");
}
```
