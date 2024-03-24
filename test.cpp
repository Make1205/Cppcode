#include <bits/stdc++.h>
using namespace std;

// int gcd(int a,int b){return !b?a:gcd(b,a%b);}

// int qp(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     if (b % 2 == 1)
//         return qp(a, b / 2) * qp(a, b / 2) * a;
//     if (b % 2 == 0)
//         return qp(a, b / 2) * qp(a, b / 2);
//     return 1;
// }

// inline void write(int res)
// {
//     if (res < 0)
//     {
//         putchar('-');
//         res = -res;
//     }
//     if (res > 9)
//         write(res / 10);
//     putchar(res % 10 + '0');
// }

// inline int read()
// {
//     int s = 0, w = 1;
//     char c = getchar();
//     while (c > '9' || c < '0')
//     {
//         if (c == '-')
//             w = -1;
//         c = getchar();
//     }
//     while (c <= '9' && c >= '0')
//     {
//         s += (s << 3) + (s << 1) + c - 48;
//         c = getchar();
//     }
//     return s * w;
// }


int main()
{
    // int arr[5]={1,3,5,7,9};
    // int *p;
    // p=arr;
    // cout<<*p++<<" "<<*(++p)<<" "<<++(*p)<<" "<<(*p)++<<" "<<*p<<endl;
    // //    ++ > * 自增运算符的优先级更高
    // cout<<*p+*p++<<" "<<*p<<endl;

    // for(int i=0;i<5;i++) cout<<arr[i]<<" ";

    // int a=-2,b=-1;
    // while(a++ || ++b)
    // {
    //     printf("%d %d \n",a,b);
    // }
    // printf("%d %d \n",a,b);
    // printf("%d",'\o7');
    // printf("%d",0x3f);
    // printf("\077 \n \77");

    // printf("%c\n",'\x3f');
    // printf("\x3f");
    // printf("%c",'9');

    // printf("%d",NULL);
    FILE *fp1,*fp2;
    int i=123123;
    char str[100];
    char ch;
    // if((fp1=fopen("/Users/make/Desktop/cpp/cppcode/t1.txt","r+"))==NULL){
    //     printf("null");
    //     exit(0);
    // }
    // fp2=fopen("/Users/make/Desktop/cpp/cppcode/t2.txt","w+");
    // fp1=fopen("/Users/make/Desktop/cpp/cppcode/t1.txt","r+");
    // while((ch=fgetc(fp1))!=-1)
    // {
    //     str[i]=ch;
    //     i++;
    // }
    // fputs(str,fp2);
    // printf("%d\n",i);
    // printf("%s\n",str);
    // fclose(fp1);
    // fclose(fp2);
    // printf("%3d",i);
    
    // float t=1.00;
    // printf("%6.2f\n ",t);
    // int x=10;
    // printf("%5.3d\n",x);
    // int x[10]={1,2,3};
    // int n=sizeof(x);
    // printf("%d",n);

    // char c[100];
    // scanf("%s",c);
    // printf("%d",strlen(c));

    int x;
    scanf("%x",&x);
    printf("%d",x);
    return 0;
}

//0  
