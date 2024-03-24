#include<stdio.h>
#include<string.h>

//用函数调用实现字符串的复制
//注意，这里形参和实参，分别用字符数组名或者字符指针变量都可以


// void s_copy(char *from,char *to) //形参用字符指针变量
// {
//     int i=0;
//     while(from[i]!='\0')to[i]=from[i],i++;
//     to[i]='\0';
// }

void s_copy(char from[],char to[])//形参用字符数组名
{
    int i=0;
    while(from[i]!='\0')to[i]=from[i],i++;
    to[i]='\0';
}

int main()
{
    char a[]="123456";
    char b[]="456789";
    char *p1=a,*p2=b;
    printf("a:%s\nb:%s\n",a,b);
    // s_copy(a,b); //传入数组名
    s_copy(p1,p2);  //传入字符指针变量
    printf("a:%s\nb:%s\n",a,b);
    return 0;
}