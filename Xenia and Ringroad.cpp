#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
using namespace std;
#define int int64_t
int32_t main()
{
    int n,m;cin>>n>>m;
    int ini=1;
    int ans=0;
    for(int i=0;i<m;i++)
    {
        int x;cin>>x;
        ans+=((x-ini+n)%n);
        ini=x;
    }
    cout<<ans<<"\n";
    return 0;
}
