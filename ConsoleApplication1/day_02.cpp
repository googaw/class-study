#if 0



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<time.h>
// ���岢���������
int number_0()
{
    srand(time(0));
    int a = rand() % 10 + 1;
    short shrt = 0;
    unsigned short ushrt = 0;
    printf("������һ���з��Ŷ�������һ���޷��Ŷ�������");
    int new_shrt = scanf("%hd %hu", &shrt, &ushrt);
    printf("������з��������� %hd\n�޷��������� %hu��\n", shrt, ushrt);
    //short�����ڴ�ռ�õĴ�Сsizeof
    printf("short ����ռ�õ��ڴ��С�ǣ�%hd\n", sizeof(short));
    printf("short ����ռ�õ��ڴ��С�ǣ�%hu\n", sizeof(unsigned short));
    //short ���͵�ȡֵ��Χ
    printf("short���͵���СȡֵΪ%hd�����ȡֵΪ%hd\n", SHRT_MIN, SHRT_MAX);
    return new_shrt; // ���� scanf �ķ���ֵ�����ڼ�������Ƿ�ɹ�
}

// ����int��
void number_1()
{
    int i = 100;
}
int main()
{
    if (number_0() != 2) {
        printf("��������\n");
    }
    system("pause");
    return 0;
}

#endif // 0


