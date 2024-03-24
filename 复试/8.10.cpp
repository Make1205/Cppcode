#include <stdio.h>
// 有一个班，三个学生各学四门课，计算总平均分以及第n个学生的成绩 search average

// 在上面的基础上，查找有一门以上课程不及格的学生并输出他们的全部信息 search1

void average(float *p, int n)
{
    float *p_end;
    float sum = 0, avg;
    p_end = p + n - 1;
    for (; p <= p_end; p++)
    {
        sum += (*p);
    }
    avg = sum / n;
    printf("avg=%5.2f\n", avg);
}

void search(float (*p)[4], int n)
{
    printf("The score of No. %d are:\n", n);
    for (int i = 0; i < 4; i++)
    {
        printf("%5.2f ", *(*(p + n) + i));
    }
    printf("\n");
}

void search1(float (*p)[4], int n)
{
    int flag;
    for (int j = 0; j < n; j++)
    {
        flag = 0;
        for (int i = 0; i < 4; i++)
        {
            if (*(*(p + j) + i) < 60)
                flag = 1;
        }
        if (flag == 1)
        {
            printf("No.%d student fails,his scores are:\n", j);
            for (int i = 0; i < 4; i++)
            {
                printf("%5.2f ", *(*(p + j) + i));
            }
        }
    }
}

int main()
{
    float score[3][4] = {{65, 67, 70, 59}, {80, 87, 90, 81}, {90, 99, 100, 98}};
    // average(*score,12);
    // search(score,2);
    search(score, 2);
    return 0;
}