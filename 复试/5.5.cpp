#include<stdio.h>

//例题5.11
//加密 a->e 以此类推 
//需要注意不能直接mod取模，在后面的字母需要手动减掉，比如说x z y
int main()
{
    char c;
    c=getchar();
    while(c!='\n')
    {
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            if((c>='W' && c<='Z') || (c>='W' && c<='Z')) c-=22;
            else c+=4;
        }
        printf("%c",c);
        c=getchar();

    }
    printf("\n");
    return 0;
}