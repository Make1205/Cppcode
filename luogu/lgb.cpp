#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
输入x，y分别表示smz和和第一名的点数
返回能使他变为第一名的番数，至少不少于第一名

*/

int main()
{
    ll x,y;
    cin>>x>>y;
    if(x+12000>=y-12000)
    {
        cout<<"5";
        return 0;
    }
    if(x+12000*1.5>=y-12000*1.5)
    {
        cout<<"6";
        return 0;
    }
    if(x+12000*2>=y-12000*2)
    {
        cout<<"8";
        return 0;
    }
    if(x+12000*3>=y-12000*3)
    {
        cout<<"11";
        return 0;
    }
    ll t=1;
    // while(x+48000<y-48000)
    // {
    //     t++;
    // }
    t=(y-x)/96000;
    cout<<(t+1)*13;
    return 0;
}