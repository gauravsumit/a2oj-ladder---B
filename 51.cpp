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
    int max_dis;cin>>max_dis;
    int n;cin>>n;
    int ans=0;
    int x;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        ans+=(max_dis-x);
    }
    cin>>x;
    cout<<ans<<"\n";
    return 0;
}
