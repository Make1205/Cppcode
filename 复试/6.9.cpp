#include<stdio.h>
#include<string.h>
#include<fplll.h>
//有三个字符串，要求找到其中最大者

int main()
{
    char str[3][20];
    char tmpstr[20];
    for(int i=0;i<3;i++)gets(str[i]);
    if(str[0]>str[1])strcpy(tmpstr,str[0]);
    else strcpy(tmpstr,str[1]);
    if(str[2]>tmpstr) strcpy(tmpstr,str[2]);

    printf("\n the biggest string is : %s\n",tmpstr);
    return 0;
}