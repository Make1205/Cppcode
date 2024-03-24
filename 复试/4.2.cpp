#include<stdio.h>
#include<math.h>
//例题4.9
//求解一元二次方程 axx+bx+c=0

int main()
{
    double a,b,c,x1,x2,real,imag,delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("The equation");
    if(fabs(a)<1e-6)  // fabs 可以理解为float abs 浮点数取绝对值，由于计算有误差，不能直接写fabs(a)==0 ，但是可以让他小于一个很小的数，相当于为0
    {
        printf("is not a equation");
    }
    else
    {
        delta=b*b-4*a*c; //判别式
        if(fabs(delta)<1e-6)
        {
            printf("has two equal roots:%8.4f\n",-b/(2*a));
        }
        else if(delta>1e-6)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("has two distince real roots:%8.4f and %8.4f\n",x1,x2);
        }
        else
        {
            real=-b/2*a;
            imag=sqrt(-delta)/(2*a);
            printf("has complex roots:\n");
            printf("%8.4f + %8.4fi\n",real,imag);
            printf("%8.4f - %8.4fi\n",real,imag);
        }
    }
    return 0;
}