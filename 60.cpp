#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()
{
    int n;cin>>n;
    vector<int> vi(n+10);
    for(int i=0;i<n;i++)
    {
        cin>>vi[i];
    }
    int ans=0;
    for(int i=n-2;i>-1;i--)
    {
        if(vi[i+1]<vi[i])
        {
            ans+=vi[i]-vi[i+1];
        }
    }
    cout<<ans<<"\n";
    return 0;
}


//
//3 2 1
//
//3 3 3

//3 1 1-> 3 2 2 -> 3 3 3





//3   2  2  2
//an+=1
//
//ans+=2
//
//ans==3
