#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()
{
    int n,m;cin>>n>>m;
    int val=(m+1)/2;
    int ar[m+10];
    for(int i=0;i<m;i++)
    {
        if(m%2!=0)
        {
            if(i%2==0)
            {
                val+=i;
                ar[i]=val;
            }
            else
            {
                val-=i;
                ar[i]=val;
            }
        }
        else
        {
            if(i%2!=0)
            {
                val+=i;
                ar[i]=val;
            }
            else
            {
                val-=i;
                ar[i]=val;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i%m]<<"\n";
    }
    return 0;
}


//
//
//1 .. . .  .  .. . .m
//
//
//1  .. . . . . . ..  .n
//
//
//choose basket with mini balls
//
//|(m+1/2) -i| =x
//choose smaller index
//
//odd -> m odd
//
//even-> m even
//
//
//0 0 0 0 0
//
//
//m+1=6/2=3 -3 =0
//
//
//
//|(m+1/2)-i| =x
//
//m+1/2 -i =x -> m+1/2 -x =i
//m+1/2-i = -x -> m+1/2+x =i
//
//
//
//0 0 0  0 0 0

//
//m=5  -> val=5+1/2=3
//
//0  0  0  0  0
//0 -1 +2 -3 +4
//
//
//even =6= val=7/2=3
//
//0 0  0 0  0  0
