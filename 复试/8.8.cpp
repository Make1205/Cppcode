#include <stdio.h>

int main()
{
    int a[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 9, 8};

    // 要求使用指向元素的指针变量输出二维数组各元素的值
    int *p; // 指向int元素的指针
    for (p = a[0]; p < a[0] + 12; p++)
    {
        if ((p - a[0]) % 4 == 0)
            printf("\n");
        printf("%4d", *p);
    }

    /*  //使用指针输出二维数组任一行任一列的元素的值
    int (*p)[4],i,j; //int (*p)[4]是指向4个元素的一维数组的指针，int * p[4]是长度为4的一维数组，元素是4个整数型指针
    p=&a[0];
    //p=a;
    printf("please enter row and colomn:\n");
    scanf("%d %d",&i,&j);
    printf("a[ %d , %d ]= %d",i,j,*(*(p+i)+j));
    */
    return 0;
}