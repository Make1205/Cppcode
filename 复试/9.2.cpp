#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 有n个学生的信息，要求按照成绩高低顺序输出各个学生的信息
struct student
{
    int num;
    char name[20];
    float score;
};

int main()
{
    student stu[5] = {{10101, "z", 78}, {10103, "w", 98}, {10106, "l", 86}, {10108, "p", 70}, {10110, "s", 100}};

    student tmp;
    int n = 5;
    int k;
    printf("The order is:\n");
    for (int i = 0; i < n - 1; i++) // 选择排序 k先设置成i，随后向后遍历找到i～n最大的数据与当前i位置的数据对换位置
    {
        k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (stu[k].score < stu[j].score) // 留标记
            {
                k = j;
            }
        }
        tmp = stu[k];
        stu[k] = stu[i];
        stu[i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%6d %8s %6.2f\n", stu[i].num, stu[i].name, stu[i].score);
    }

    return 0;
}