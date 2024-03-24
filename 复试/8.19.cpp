#include<stdio.h>

//有一个指针数组，其元素分别指向一个整形数组，用指向指针数据的指针变量，输出整型数组各元素的值
//分析：程序中定义p是指向指针型数据的指针变量，开始时指向指针数组num的首元素，a[0]
//开始时p的值是&num[0] *p是num[0] 也就是&a[0]。随后p++，p就指向num[1]
int main()
{   
    int a[5]={1,3,5,7,9};
    int *num[5];
    for(int i=0;i<5;i++) num[i]=&a[i];
    int **p=num;
    for(int i=0;i<5;i++) printf("%d ",**p),p++;
    return 0;
}

