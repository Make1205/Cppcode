#include<stdio.h>

//例题6.8
//输入一行字符，统计其中有多少个单词，单词之间用空格分开  
//需要注意

int main()
{
    char string[100];
    int i=0,num=0,word=0;
    gets(string);
    while(string[i]!='\0')
    {
        if(string[i]==' ')word=0;
        else if(word==0)
        {
            word=1;
            num++;
        }
        
    }

    
    
    return 0;
}