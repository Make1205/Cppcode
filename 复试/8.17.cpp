#include<stdio.h>
#include<string.h>

// 将若干字符串按字母顺序（由小到大）输出

void sort(char *name[],int n)  //经典的选择排序  传入的是字符类型的指针数组  比较各个指针指向的字符串
{
    char *tmp;
    int k;
    for(int i=0;i<n-1;i++)
    {
        k=i;
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(name[k],name[j])>0)k=j; //取字母顺序小的j 赋值到k 最后k与i交换
        }
        if(k!=i) tmp=name[i],name[i]=name[k],name[k]=tmp;
        
    }
}

void print(char *name[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
}

int main()
{
    int n=3;
    char *name[]={"qwe","abc","a"};  // char *name[] 字符串指针数组 每个元素都是指针，指向对应的字符串的开头地址
    sort(name,n);
    print(name,n);
    return 0;
}