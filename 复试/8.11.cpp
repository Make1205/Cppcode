#include <stdio.h>
#include <string.h>
// 定义一个字符数组，在其中存放字符串“I love China!”，输出该字符串的第8个字符
// 通过字符指针变量输出一个字符串

int main()
{
    char s[] = "I love China!"; // 字符数组定义
    char *sp = "I love China!";

    printf("%s \n%c\n", s, s[7]);

    printf("%s", sp);
}