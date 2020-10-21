#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
int32_t main()
{
    int n,d,l;
    cin>>n>>d>>l;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        if(i&1)
        {
            ar[i]=1;
        }
        else
        {
            ar[i]=l;
        }
    }
    int max_ans=0;
    for(int i=n-1;i>-1;i--)
    {
        max_ans=ar[i]-max_ans;
    }
    if(d>max_ans)
    {
        cout<<"-1\n";
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(max_ans>d)
            {
                if(i&1)
                {
                    ar[i]+=min(l-1,max_ans-d);
                    max_ans-=(ar[i]-1);
                }
                else
                {
                    ar[i]-=min(l-1,max_ans-d);
                    max_ans-=(l-ar[i]);
                }
            }
        }
    }
    if(max_ans!=d)
    {
        cout<<"-1\n";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}




//
//
//
//d = total value of seq
//
//seq  size= n
//
//odd ->
//
//
//l 1 l 1 l
//
//l -(l-1)
//
//2*l-1
//
//even->
//
//l 1 l 1 l 1
//
//
//l-1
//
//1<=x<=l
//
//
//l 1 l 1 l 1 =max_ans
//
//d>max_ans
//-1
//
//
//
//
//
