#include<stdio.h>
#include<stdlib.h>

//将一个文件的信息复制到另一个文件中

int main()
{
    FILE *in,*out;
    printf("从文件：  复制到文件：");
    char fi[100],fo[100],ch;
    scanf("%s",fo);
    scanf("%s",fi);

    if((in=fopen(fi,"w"))==NULL)
    {
        printf("无法打开文件");
        exit(0);
    }
    if((out=fopen(fo,"r"))==NULL)
    {
        printf("无法打开文件");
        exit(0);
    }
    ch=fgetc(out);  //从out文件读入一个字符 赋值给ch

    while(!feof(out)) //如果未遇到输出文件的结束标志
    {
        fputc(ch,in); //将ch输出到文件in
        putchar(ch); //屏幕上打出来
        ch=fgetc(out); //接着把读入的字符赋值给ch
    }
    
    putchar(10); //输出换行
    fclose(in);
    fclose(out);
    return 0;
}