#include <stdio.h>

// 对输入的两个整数按大小排序，现在要求用函数处理
// 注意变量前面要加&，表示变化会传回
void swap(int *p1, int *p2) // 这里实际上是交换p1和p2指向的值了，不是交换指针
{
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main()
{
    int a, b, *p1, *p2;

    printf("please enter two integer number:");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
        swap(p1, p2);

    printf("%d %d", a, b);
    return 0;
}