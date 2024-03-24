#include <stdio.h>

// 有a个学生，每个学生有b门课程的成绩，要求输入学生序号以后能够输出该学生的全部成绩，用指针函数实现 search
// 基于上述问题，找出其中有不及格课程的学生及其学生号 search2

// float *search(float (*p)[4],int n)
// {
//     float *pt;
//     pt=*(p+n);  //*(p+n) 和 (*p+n)需要有所区分，前者表示先+n行再取内容，也就是先加到第n行，然后返回第n行的开头元素地址，后者表示先取p行的内容，然后再+n个元素
//     return pt;
// }

float *search2(float (*p)[4])
{
    float *pt;
    pt = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (*(*p + i) < 60)
            pt = *p;
    }
    return pt;
}

int main()
{
    float score[][4] = {{65, 67, 70, 59}, {56, 87, 90, 81}, {93, 99, 100, 0}};
    float *p;
    /* //查找第n个学生的成绩
    int i,k;
    printf("please enter the number of stu:\n");
    scanf("%d",&k);
    p=search(score,k);
    for(i=0;i<4;i++)
    {
        printf("%5.2f ",*(p+i));
    }
    */

    for (int i = 0; i < 3; i++)
    {
        p = search2(score + i); // 调用search2函数，如果有不及格，则返回score[i][0]的地址，反之则为NULL
        if (p == *(score + i))  // 如果返回的不是NULL，则表示有不及格
        {
            printf("No.%d score:", i);
            for (int j = 0; j < 4; j++)
            {
                printf("%5.2f ", *(p + j));
            }
            printf("\n");
        }

        
    }

    return 0;
}