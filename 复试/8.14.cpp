#include<stdio.h>
//用函数求整数a和b的较大者
//用函数指针实现

int max(int a,int b)
{
    int z;
    if(a>b)z=a;
    else z=b;
    return z;
}

int main()
{
    int a,b,c;
    printf("please enter a and b:\n");
    scanf("%d %d",&a,&b);
    
    // c=max(a,b);//普通的通过函数名称调用函数
    int (*p)(int,int) =max; //通过函数指针调用
    c=(*p)(a,b);
    printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
    return 0;
}