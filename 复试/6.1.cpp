#include<stdio.h>

// 有十个地区的面积，要求对他们由小到大顺序排列
// 冒泡排序 或者 选择排序 

int main()
{
    int a[10];
    int tmp;
    printf("please enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    // for(int i=0;i<10;i++)  //冒泡排序
    // {
    //     for(int j=9;j>i;j--)
    //     {
    //         if(a[j]<a[j-1])
    //         {
    //             tmp=a[j];
    //             a[j]=a[j-1];
    //             a[j-1]=tmp;
    //         }
    //     }
    // }

    for(int i=0;i<10;i++)  //选择排序
    {
        int k=i;
        for(int j=i;j<10;j++)
        {
            if(a[j]<a[k]) k=j;
        }
        tmp=a[i];
        a[i]=a[k];
        a[k]=tmp;
    
    }


    for(int i=0;i<10;i++)printf("%d ",a[i]);
    return 0;
}

// 9 8 7 6 5 4 3 2 1 0