#include<stdio.h>

// 例题4.8
// 判断是否闰年

int main()
{   
    int year,leap;
    printf("enter year:\n");
    scanf("%d",&year);
    /*//方法一
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                leap=1;
            }
            else
            {
                leap=0;
            }
        }
        else leap=1;
    }
    else leap=0;
    */

    // //方法2
    // if(year%4!=0)leap=0;
    // else if(year%100!=0)leap=1;
    // else if(year%400==0)leap=1;
    // else leap=0;
    
    //方法3
    if((year%4==0 && year%100!=0) || year%400==0) leap=1;
    else leap=0;


    if(leap==1)printf("%d is ",year);
    else printf("%d is not ",year);

    printf("a leap year\n");
    return 0;
}