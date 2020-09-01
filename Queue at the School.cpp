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
    int n;cin>>n;int t;cin>>t;
    string s;cin>>s;
    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' and s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<"\n";
    return 0;
}
