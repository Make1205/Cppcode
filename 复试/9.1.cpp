#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 有三个候选人，每个选民只能投一票，要求编写一个统计选票程序，先输入被选人的名字，最后输出得票结果
struct person
{
    char name[20];
    int cnt;
} leader[3] = {"L", 0, "Z", 0, "S", 0};

int main()
{
    char leader_name[20];
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", leader_name);
        for (int j = 0; j < 3; j++)
        {
            leader[j].cnt += (strcmp(leader_name, leader[j].name) == 0);
        }
    }
    printf("result:");
    for (int i = 0; i < 3; i++)
    {
        printf("%5s:%d\n", leader[i].name, leader[i].cnt);
    }
    return 0;
}