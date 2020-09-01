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
    string s;cin>>s;
    int k;cin>>k;
    int ar[30];
    int maximum=0;
    for(int i=0;i<26;i++)
    {
        cin>>ar[i];
        maximum=max(maximum,ar[i]);
    }
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans+=(i+1)*(ar[s[i]-'a']);
    }
    int val=s.length()+1;
    while(k--)
    {
        ans+=val*maximum;
        val++;
    }
    cout<<ans<<"\n";
    return 0;
}
