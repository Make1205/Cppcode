#include <stdio.h>

// 输入三个整数a,b,c,要求由大到小按顺序输出，由函数实现

void swap(int *p1, int *p2)
{
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void sort(int *p1, int *p2, int *p3)
{
    if (*p1 < *p2)
        swap(p1, p2);
    if (*p1 < *p3)
        swap(p1, p3);
    if (*p2 < *p3)
        swap(p2, p3);
}

int main()
{
    int a, b, c, *p1, *p2, *p3;
    printf("please enter three integer number:\n");
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    sort(p1, p2, p3);
    printf("%d %d %d", a, b, c);
    return 0;
}