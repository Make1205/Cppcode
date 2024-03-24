#include <stdio.h>

// 输入a和b两个整数，按大小先后顺序输出a和b

int main()
{
    int *p1, *p2, *p, a, b;
    printf("please enter two integer number:");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    printf("%d %d", *p1, *p2);
    return 0;
}