#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 建立一个简单的静态链表，由三个学生数据节点组成，要求输出各个节点中的数据
// 结构体指针有两种访问方式，p->num 或者 (*p).num 效果一样
struct student
{
    int num;
    float score;
    student *next;
};

int main()
{
    student a, b, c, *head, *p;
    a.num = 10101;
    a.score = 89.5;
    b.num = 10103;
    b.score = 90;
    c.num = 10107;
    c.score = 85;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    p = head;
    while (p != NULL)
    {
        printf("%d %5.1f\n", p->num, (*p).score);
        p = (*p).next; // 或者写成p=p->next
    }

    return 0;
}