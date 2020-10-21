#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()
{
    int n,m;cin>>n>>m;
    int ar[n+10],br[m+10];
    for(int i=0;i<=n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<=m;i++)
    {
        cin>>br[i];
    }
    if(n>m)
    {
        if((br[0]>0 and ar[0]>0) || (br[0]<0 and ar[0]<0))
        {
            cout<<"Infinity\n";
        }
        else
        {
            cout<<"-Infinity\n";
        }
    }
    else if(m>n)
    {
        cout<<"0/1"<<"\n";
    }
    else
    {
        int kk=__gcd(ar[0],br[0]);
        ar[0]/=kk;
        br[0]/=kk;
        if((br[0]>0 and ar[0]>0) || (br[0]<0 and ar[0]<0))
        {
            cout<<ar[0]<<"/"<<br[0]<<"\n";
        }
        else
        {
            cout<<"-"<<abs(ar[0])<<"/"<<abs(br[0])<<"\n";
        }
    }
    return 0;
}

//
//
//n>m
//+Infinity ->a0 and b0 same sign
//-Infinity -> a0 and b0 opp sign
//
//m>n
//0
//
//m==n
//
//a0/b0
