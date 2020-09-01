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
int ar[(int)1e6+10];
set<int> tprime;
void t_primes()
{
    tprime.insert(4);
    for(int i=3;i<(int)1e6+1;i+=2)
    {
        if(ar[i]==0)
        {
            tprime.insert(i*i);
            for(int j=i;j<=1e6;j+=i)
            {
                ar[j]=1;
            }
        }
    }
}
int32_t main()
{
    int n;cin>>n;
    t_primes();
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(tprime.find(x)!=tprime.end())
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
