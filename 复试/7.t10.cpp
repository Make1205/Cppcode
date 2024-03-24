#include<stdio.h>
#include<string.h>

int alphabetic(char c)
{
    if((c<='z' && c>='a') || (c<='Z' && c>='A'))return 1;
    else return 0;
}

int longest(char string[])
{
    int len=0,i,length=0,flag=1,place=0,point;
    for(i=0;i<=strlen(string);i++)
    {
        if(alphabetic(string[i]))
        {
            if(flag==1)  // flag ==1 表示之前不是字母
            {
                point=i;
                flag=0;
            }
            else len++;
        }
        else
        {
            flag=1;
            if(len>=length)
            {
                length=len;
                place=point;
            }
            len=0;
        }
    }
    return place;
}

int main()
{   
    int i=0;
    char line[100];
    gets(line);
    for(i=longest(line);alphabetic(line[i]);i++) printf("%c",line[i]);



    return 0;
}