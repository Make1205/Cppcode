#include <stdio.h>

// 将数组a中n个整数按相反顺序存放

void inv(int a[], int n)
{
    int tmp, j;
    int m = (n - 1) / 2;
    for (int i = 0; i <= m; i++)
    {
        j = n - 1 - i;
        tmp = a[j], a[j] = a[i], a[i] = tmp;
    }
    return;
}

int main()
{
    int i;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("the original array:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    inv(a, 10);
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}