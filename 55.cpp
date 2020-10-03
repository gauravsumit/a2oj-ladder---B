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
#include<iomanip>
#include<cstdlib>  //for srand()
using namespace std;
#define int int64_t
int32_t main()
{
    int n,m;cin>>n>>m;
    map<int,set<int> > mp;
    for(int i=0;i<m;i++)
    {
        int x,y;cin>>x>>y;
        mp[x].insert(y);
        mp[y].insert(x);
    }
    int ans=0;
    bool flag=true;
    while(flag)
    {
        flag=false;
        set<pair<int,int> > free;
        for(auto i:mp)
        {
            if(i.second.size()==1)
            {
                free.insert(make_pair(i.first,*i.second.begin()));
            }
        }
        if(free.size()>0)
        {
            ans++;
            for(auto i:free)
            {
                mp[i.first].erase(i.second);
                mp[i.second].erase(i.first);
            }
            flag=true;
        }
    }
    cout<<ans<<"\n";
    return 0;
}

