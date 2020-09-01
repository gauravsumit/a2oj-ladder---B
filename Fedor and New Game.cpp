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
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
using namespace std;
#define int int64_t
int32_t main()
{
    int n,m,k;cin>>n>>m>>k;
    bitset<32> ar[m+10];
    for(int i=0;i<m+1;i++)
    {
        int x;cin>>x;
        ar[i]=x;
    }
    int ans=0;
    for(int i=0;i<m;i++)
    {
        int k_dif=0;
        for(int j=0;j<32;j++)
        {
            if(ar[m][j]!=ar[i][j])
            {
                k_dif++;
            }
        }
        if(k_dif<=k)
        {
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
