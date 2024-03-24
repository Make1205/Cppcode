#include <stdio.h>
#include <string.h>

// 将字符串a复制到字符串b中，然后输出字符串b
// 用指针变量完成上述问题
int main()
{
    // int i;
    char a[] = "123123", b[20], *p1, *p2;
    // for(i=0;*(a+i)!='\0';i++)
    // {
    //     *(b+i)=*(a+i);
    // }
    // *(b+i)='\0';
    // printf("a:%s\n",a);
    // printf("b:%s\n",b);

    // b=a;  //实际上如果定义b时就定义b为字符指针，则可以赋值b=a
    // printf("%s",b);

    p1 = a; // 如果定义b为数组，已经声明了大小，则不能直接赋值，需要逐个把a字符串赋值过来
    p2 = b;
    for (; *p1 != '\0'; p1++, p2++)
    {
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("b:%s\n", b);
    return 0;
}