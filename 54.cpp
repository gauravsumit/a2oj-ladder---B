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
    int n,k;
    cin>>n>>k;
    int co=1;
    vector<int> ans;
    while(k--)
    {
        ans.push_back(co);
        co++;
        ans.push_back(co);
        co++;
        ans.push_back(co+1);
        ans.push_back(co);
        co+=2;
    }
    for(int i=co-1;i<2*n;i+=2)
    {
        ans.push_back(co);
        ans.push_back(co+1);
        co+=2;
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
