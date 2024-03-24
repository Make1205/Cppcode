#include<stdio.h>

//输入一个大于3的整数，判定它是否为质数

int main()
{
    int n,i;
    printf("please enter a integer number:\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)break; //如果有质数，则直接break结束循环
    }
    if(i<n)printf("%d is not a prime number.\n",n);  //判定i停留在哪
    else printf("%d is a prime number.\n",n); 
    return 0;
}