#include <stdio.h>

int main()
{
    int a[10];
    // for(int i=0;i<10;i++) //使用元素序号输入
    // {
    //     scanf(" %d",&a[i]);
    // }

    for (int *p = a; p < (a + 10); p++) // 使用指针输入
    {
        scanf(" %d", p);
    }

    // for(int i=0;i<10;i++)
    // {
    //     // printf("%d ",a[i]);
    //     printf("%d ",*(a+i));//通过数组名与元素序号计算元素地址
    // }

    for (int *p = a; p < (a + 10); p++)
    {
        printf("%d ", *p);
    }

    printf("\n");
    return 0;
}