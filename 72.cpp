#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int mp[1000];
    for(int i=0;i<=k;i++)
        mp[i]=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    int ans=-1;
    bool flag=true;
    while(flag)
    {
        flag=false;
        ans++;
        for(int i=k-1;i>0;i--)
        {
            if(mp[i]>0)
            {
                flag=true;
                mp[i]--;
                mp[i+1]+=1;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}



//
//4 4
//1 2 2 3
//
//
//
//(1)
//
//(2,2)
//
//(3)
//
//after 1 gold coin
//
//(1)->(2)
//
//(2,2)->(2,3)
//
//(3)->4
//
//
//2,2,3,4
//
//
//(2,2) ->(2,3)
//
//(3)->(4)
//
//4->4
//2,3,4,4
//
//2,3
//2->3
//3->4
//
//3,4,4,4
//
//
//3->4
//
//4,4,4,4
