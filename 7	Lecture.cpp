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
#include<iomanip>
using namespace std;
#define int int64_t
int32_t main()
{
    int n,m;cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<m;i++)
    {
        string x,y;cin>>x>>y;
        if(x.length()>y.length())
        {
            mp[x]=y;
        }
        else
        {
            mp[x]=x;
        }
    }
    for(int i=0;i<n;i++)
    {
        string x;cin>>x;
        cout<<mp[x]<<" ";
    }
    cout<<"\n";
    return 0;
}
