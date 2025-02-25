// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<limits.h>
// 定义并输出短整型
int number_0()
{
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
    unsigned int ui = 1000;
    scanf("%d %u", &i, &ui);
    //表示占了多少字节用sizeof
    printf("该类型占用的内存大小为：%d/n", sizeof(int));
    //表示类型的取值范围
    printf("该类型的最大取值为：%d", INT_MAX);


}
int main()
{
    if (number_0() != 2)
    {
        printf("输入有误。\n");
    }
    number_1();
    system("pause");
    return 0;
}


#endif



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
 