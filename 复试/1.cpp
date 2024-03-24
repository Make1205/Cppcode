#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    // int i=1;
    // float f=1;
    // char a='1';
    // int *ip=&i; //& 取地址
    // cout<<ip<<endl; 
    // cout<<*ip<<endl; //*取该地址的值
    // int **ipp=&ip;
    // cout<<ipp<<endl;
    // cout<<*ipp<<endl;

    // cout<<sizeof(i);
    // cout<<sizeof(a);
    // cout<<sizeof(f);
    cout<<strcmp("c","a");
    return 0;
}