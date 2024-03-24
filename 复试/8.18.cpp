#include<stdio.h>
#include<string.h>

//使用指向指针数据的指针变量
//定义一个指针数组name，并对他们初始化，使name数组中每个元素分别指向5个字符串。
//定义一个指向指针数据的指针变量p，使p先后指向name中各个元素，输出这些元素所指向的字符串
int main()
{
    char *name[]={"qwe","abc","a"};  // char *name[] 字符串指针数组 每个元素都是指针，指向对应的字符串的开头地址
    char **p;
    p=&name[0];
    for(int i=0;i<3;i++)
    {
        printf("%s\n",*p);
        p++;
    }
    return 0;

}