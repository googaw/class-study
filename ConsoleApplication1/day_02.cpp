#if 0



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<time.h>
// 定义并输出短整型
int number_0()
{
    srand(time(0));
    int a = rand() % 10 + 1;
    short shrt = 0;
    unsigned short ushrt = 0;
    printf("请输入一个有符号短整数和一个无符号短整数：");
    int new_shrt = scanf("%hd %hu", &shrt, &ushrt);
    printf("输出的有符号数字是 %hd\n无符号数字是 %hu。\n", shrt, ushrt);
    //short类型内存占用的大小sizeof
    printf("short 类型占用的内存大小是：%hd\n", sizeof(short));
    printf("short 类型占用的内存大小是：%hu\n", sizeof(unsigned short));
    //short 类型的取值范围
    printf("short类型的最小取值为%hd，最大取值为%hd\n", SHRT_MIN, SHRT_MAX);
    return new_shrt; // 返回 scanf 的返回值，用于检查输入是否成功
}

// 定义int型
void number_1()
{
    int i = 100;
}
int main()
{
    if (number_0() != 2) {
        printf("输入有误。\n");
    }
    system("pause");
    return 0;
}

#endif // 0


