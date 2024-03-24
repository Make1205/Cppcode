#include<stdio.h>

//例7.8 汉诺塔问题

void move(char x,char y)
{
    printf("%c -> %c\n",x,y);
}

void hanoi(char from,char to,char tmp,int n)  //从from 移动到 to， tmp暂存 n个盘子
{
    if(n==1) move(from,to);  //如果只有一个盘子，直接移过去
    else  
    {
        hanoi(from,tmp,to,n-1);  //递归，先将上面n-1的盘子移动到tmp暂存
        move(from,to);//然后将最底下的一个盘子直接移到to
        hanoi(tmp,to,from,n-1);//然后再将原本暂存在tmp的n-1个盘子移动到to
    }
}

int main()
{
    int n;
    printf("input the number of disks:");
    scanf("%d",&n);
    printf("The step to move %d disks:\n",n);
    hanoi('A','B','C',n);
    return 0;
}