#include<stdio.h>
//有两个整数a和b，由用户输入1，2或者3.如果输入1则给出a，b较大者，2给出a，b较小者，3则给出a，b的和
//

int max(int a,int b)
{
    return a>=b?a:b;
}

int min(int a,int b)
{
    return a<=b?a:b;
}

int sum(int a,int b)
{
    return a+b;
}

int fun(int a,int b,int (*p)(int,int))
{
    int res;
    res=(*p)(a,b);
    return res;
}

int main()
{
    int a=1,b=2,c,res;
    int (*p)(int,int);
    printf("please enter 1,2or3:\n");
    scanf("%d",&c);
    // switch(c)
    // {
    //     case 1:p=max;break;
    //     case 2:p=min;break;
    //     case 3:p=sum;break;
    //     default:break;
    // }
    // res=fun(a,b,p);
    if(c==1) res=fun(a,b,max);
    else if(c==2) res=fun(a,b,min);
    else if(c==3) res=fun(a,b,sum);


    
    printf("res=%d\n",res);
    return 0;
}