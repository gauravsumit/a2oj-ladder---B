#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()
{
    int n;cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ans=100000;
    ans=min(ar[0],ar[n-1]);
    for(int i=0;i<n-1;i++)
    {
        ans=min(ans,max(ar[i],ar[i+1]));
    }
    cout<<ans<<"\n";
    return 0;
}
