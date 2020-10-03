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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,k;cin>>n>>k;
    vector<pair<int,int> > vp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        vp.push_back(make_pair(-x,i+1));
    }
    sort(vp.begin(),vp.end());
    cout<<-vp[k-1].first<<"\n";
    for(int i=0;i<k;i++)
    {
        cout<<vp[i].second<<" ";
    }
    cout<<"\n";
    return 0;
}

