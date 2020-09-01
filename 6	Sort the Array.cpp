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
    int n;cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int st=-1;
    int en=n;
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        if(flag)
        {
            if(ar[i]<ar[i-1])
            {
                flag=false;
                st=i-1;
            }
        }
        else
        {
            if(ar[i]>ar[i-1])
            {
                en=i;
                break;
            }
        }
    }
    if(st!=-1)
    {
        reverse(ar+st,ar+en);
        for(int i=1;i<n;i++)
        {
            if(ar[i]<ar[i-1])
            {
                flag=false;
                break;
            }
            else
            {
                flag=true;
            }
        }
    }
    if(flag)
    {
         cout<<"yes\n";
        if(st==-1)
        {
            cout<<"1 1\n";
        }
        else
        {
            cout<<st+1<<" "<<en<<"\n";
        }
    }
    else
    {
        cout<<"no\n";
    }
    return 0;
}
