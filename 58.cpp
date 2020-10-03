#include<bits/stdc++.h>
using namespace std;
int64_t face_value(int64_t n)
{
    int64_t ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int main()
{
    int64_t n;cin>>n;
    int64_t val=sqrt(n);
    for(int64_t i=val;i>=max((int64_t)0,val-100);i--)
    {
        if(i*(i+face_value(i))==n)
        {
            cout<<i<<"\n";
            return 0;
        }
    }
    cout<<"-1\n";
    return 0;
}


//n=10^18
//
//ans<sqrt(n)
//
//x<10^9
//
//x^2+s(x)*x
//
//
//1<=s(x)<82
