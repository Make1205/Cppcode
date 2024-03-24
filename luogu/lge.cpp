#include<bits/stdc++.h>
using namespace std;

map<char,int> mp;
set<int> st;
int main()
{
    long long n;
    string s;
    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]!='2' and s[i]!='0' and s[i]!='1' and s[i]!='4')
        {
            cout<<"No"<<endl;
            return 0;
        }
        mp[s[i]]++;
    }

    st.insert(mp['2']);
    st.insert(mp['0']);
    st.insert(mp['1']);
    st.insert(mp['4']);

    if(st.size()==1 and mp['2']!=0)cout<<"Yes";
    else cout<<"No";
    return 0;
}