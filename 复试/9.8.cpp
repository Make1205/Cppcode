#include <stdio.h>

// 口袋中有红黄蓝白黑五种颜色球若干，每次从口袋中先后取出三个球，问得到三个不同颜色球的可能取法，并输出每种排列的情况

int main()
{
    enum Color
    {
        red = 1,
        yellow = 2,
        blue,
        white,
        black
    };
    enum Color i, j, k, pri;

    int n = 0;
    int loop;

    for (i = red; i <= black; i = (enum Color)(i + 1))
    {
        for (j = red; j <= black; j = (enum Color)(j + 1))
        {
            if (i != j)
            {
                for (k = red; k <= black; k = (enum Color)(k + 1))
                {
                    if (k != i && k != j)
                    {
                        n = n + 1;
                        printf("%-4d", n);
                        for (loop = 1; loop <= 3; loop++)
                        {
                            switch (loop)
                            {
                            case 1:
                                pri = i;
                                break;
                            case 2:
                                pri = j;
                                break;
                            case 3:
                                pri = k;
                                break;
                            default:
                                break;
                            }

                            switch (pri)
                            {
                            case red:
                                printf("%-10s", "red");
                                break;
                            case yellow:
                                printf("%-10s", "yellow");
                                break;
                            case blue:
                                printf("%-10s", "blue");
                                break;
                            case white:
                                printf("%-10s", "white");
                                break;
                            case black:
                                printf("%-10s", "black");
                                break;
                            default:
                                break;
                            }
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    printf("total: %5d", n);
    return 0;
}