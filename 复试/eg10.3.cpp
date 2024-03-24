#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// 从键盘读入若干个
int main()
{
    // FILE *fp;
    // char s[3][10],tmp[10];
    // int i,j,k,n=3;
    // printf("请输入字符串：\n");
    // for(i=0;i<n;i++)
    // {
    //     scanf("%s",s[i]);
    // }

    // for(i=0;i<n-1;i++)
    // {
    //     k=i;
    //     for(j=i+1;j<n;j++)
    //     {
    //         if(strcmp(s[k],s[j])>0)k=j;
    //     }
    //     if(k!=i)
    //     {
    //         strcpy(tmp,s[i]);
    //         strcpy(s[i],s[k]);
    //         strcpy(s[k],tmp);
    //     }

    // }

    // if((fp=fopen("/Users/make/Desktop/cpp/cppcode/复试/1.txt","w"))==NULL)
    // {
    //     printf("cannot open file\n");
    //     exit(0);
    // }
    // printf("\n the new sentence:\n");
    // for(i=0;i<n;i++)
    // {
    //     fputs(s[i],fp);
    //     fputs("\n",fp);
    //     printf("%s \n",s[i]);
    // }
    // fclose(fp);





    //读取字符
    FILE *fp;
    char s[3][10];
    
    fp=fopen("/Users/make/Desktop/cpp/cppcode/复试/1.txt","r");
    if(fp==NULL) printf("cannot open file"),exit(0);
    int t=0;
    while(fgets(s[t],10,fp)!=NULL)printf("%s",s[t]),t++;

    fclose(fp);

    return 0;
}