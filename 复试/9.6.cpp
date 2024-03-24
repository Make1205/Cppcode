#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define len sizeof(struct student)
// 建立动态链表
// 写一个函数建立由3个学生数据的单向动态链表
// 定义三个指针变量：head,p1,p2,他们都是指向struct student类型的，先用malloc开辟第一个节点，并用p1和p2都指向它。然后从键盘读入一个学生的数据给p1所指的第一个节点。在此约定学号不为0，如果学号为0，则表示建立链表过程完成，此学号为0的节点不应被添加到链表中。先使head的值为NULL，这是链表为空时的情况，当建立第一个节点的时候head就指向该节点。
//
struct student
{
    long num;
    float score;
    struct student *next;
};
int n;

struct student *creat() // 创建节点，并不断添加，直至输入学号为0
{
    struct student *head, *p1, *p2;
    n = 0;
    p1 = p2 = (struct student *)malloc(len);

    scanf(" %ld %f", &p1->num, &p1->score);
    head = NULL;

    while (p1->num != 0)
    {
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct student *)malloc(len);
        scanf(" %ld %f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return head;
}

void print(struct student *head)
{
    student *p;
    p = head;
    printf("\nNow,these %d records are: \n", n);
    while (p != NULL)
    {
        printf("%ld %5.1f \n", p->num, p->score);
        p = p->next;
    }
}

int main()
{
    struct student *pt;
    pt = creat();
    // printf("\nnum:%ld\nscore:%5.1f\n", pt->num, pt->score);

    print(pt);
    return 0;
}