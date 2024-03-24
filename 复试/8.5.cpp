#include <stdio.h>

int main()
{

    int a[10], *p;
    p = a;
    printf("please enter 10 integer number:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", p++);
    }
    p = a; // 注意将p指针重新指向a数组，不然就会输出后面的数
    for (int i = 0; i < 10; i++, p++)
    {
        printf("%d ", *p);
    }
    return 0;
}