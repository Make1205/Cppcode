#include<stdio.h>
#include<math.h>

//例题5.7
//求fibonacci数列前40个数

int main()
{
    int f1=1,f2=1,f3;
    
    for(int i=0;i<40;i++)  //尾递归
    {
        f3=f1+f2;
        printf("%12d",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}