#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 有若干人员的数据，其中有教师和学生。学生的数据包括：姓名，学号，性别，职业，班级。教师的数据包括姓名，号码，性别，职业，职务。现要求用同一个表格来处理
// 可以看出：学生和教师的数据项目大部分是相同的，但有一项不同。现在要求用同一个表格来处理，显然对第五项可以用共用体来处理（将class和position放在同一个存储单元中）
// 先输入人员的数据，然后再输出

//%-10s 代表字符串共占用10行且左边对齐 %5d表示占用5行且右边对齐

struct // 声明无名结构体类型
{
    int num;
    char name[10];
    char sex;
    char job;
    union
    { // 声明无名共用体类型
        int clas;
        char position[10];
    } category;
} person[2]; // 定义结构体数组，有两个元素

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("please enter the data of person:\n");
        scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);
        if (person[i].job == 's')
        {
            scanf("%d", &person[i].category.clas);
        }
        else if (person[i].job == 't')
        {
            scanf("%s", person[i].category.position);
        }
        else
            printf("Input error");
    }

    printf("\n");
    printf("No.   name     sex job class / position \n");
    for (int i = 0; i < 2; i++)
    {
        if (person[i].job == 's')
        {
            printf("%-6d %-7s %-4c %-4c %-10d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.clas);
        }
        else
        {
            printf("%-6d %-7s %-4c %-4c %-10s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
        }
    }
    return 0;
}

/*

101    l          f    s    501
102    w          m    t    prof

*/