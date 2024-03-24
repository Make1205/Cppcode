#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 3
// 有n个结构体变量，内含学生学号，姓名和三门课程的成绩，要求输出平均成绩最高的学生的信息（包括学号，姓名，三门课程成绩和平均成绩）
struct student
{
    int num;
    char name[20];
    float score[3];
    float avg;
};

void input(struct student stu[])
{
    printf("请输入各学生的信息：学号、姓名、三门课成绩：\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].avg = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}

struct student max(struct student stu[])
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (stu[i].avg > stu[m].avg)
            m = i;
    }
    return stu[m];
}

void print(struct student stu)
{
    printf("\n成绩最高的学生是\n");
    printf("学号：%d\n姓名:%s\n三门课成绩:%5.1f,%5.1f,%5.1f\n平均成绩:%6.2f", stu.num, stu.name, stu.score[0], stu.score[1], stu.score[2], stu.avg);
}

int main()
{
    student stu[n], *p = stu;
    input(p);
    print(max(p));

    return 0;
}