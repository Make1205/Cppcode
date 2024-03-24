#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 通过指向结构体的指针变量输入结构体变量中成员的信息
// 考虑两个问题：（1）怎么样对结构体变量成员赋值 （2）怎么样通过指向结构体变量的指针访问结构体变量中的成员

struct student
{
    long num;
    char name[20];
    char sex;
    float score;
};
student stu_1;
student *p;

int main()
{
    p = &stu_1;
    stu_1.num = 10101;
    strcpy(stu_1.name, "L");
    stu_1.sex = 'M';
    p->score = 90;

    printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n", stu_1.num, p->name, (*p).sex, (*p).score);
    return 0;
}