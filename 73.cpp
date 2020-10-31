#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()
{
    int x,y,n;
    cin>>x>>y>>n;
    double dis=1e10;
    int a=0,b=0;
    for(int i=1;i<=n;i++)
    {
        int num=(double)i*x/y;
        double tmp;
        tmp=abs(x*1.0/y*1.0-num*1.0/i*1.0);
        if(tmp<dis)
        {
            dis=tmp;
            a=num,b=i;
        }
        tmp=abs(x*1.0/y*1.0-(num+1)*1.0/i*1.0);
        if(tmp<dis)
        {
            dis=tmp;
            a=num+1;
            b=i;
        }
    }
    cout<<a<<"/"<<b<<endl;
    return 0;
}


//x/y
//
//
//dem <=n
//n=10^5
//
//a/b
//
//for every denominator
//a/b
//
//b=1...n
//
//
//|x/y-a/b|
//
//
//
//(b*x/y) /b -> x/y
//
//num = b*x/y
//
//reminder 0
//num/b ->x/y
//
//reminder!=0
//
//
//double num  <=x.5
//num=x
//
//num >10.5 ->10.6 ->11
//7 2 4
//
//
//x=7
//y=2
//
//n=4
//
//1...4
//
//dem=1
//
//num= 1*7/2 =3/1 -x/y=0.5
//num+1 = 4/1-x/y=0.5
//
//
//dem=2
//num 2*7/2= 7/2-x/y=0
