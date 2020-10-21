#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,st,en;cin>>n>>m>>st>>en;
    string ans="";
    int tt=0;
    while(m--)
    {
        int t,l,r;cin>>t>>l>>r;
        if(t!=tt+1)
        {
            while(t!=tt+1)
            {
                tt++;
                if(en>st)
                {
                    ans+='R';
                    st++;
                }
                else if(st>en)
                {
                    ans+='L';
                    st--;
                }
            }
        }
        
        tt++;
        if(st==en)
        {
            continue;
        }
        else if(st>en)
        {
            if(st<l || st-1>r)
            {
                ans+='L';
                st--;
            }
            else
            {
                ans+='X';
            }
        }
        else
        {
            if(st>r || st+1<l)
            {
                ans+='R';
                st++;
            }
            else{
                ans+='X';
            }
        }
        
    }
    while(st!=en)
    {
        if(st>en)
        {
            en++;
            ans+='L';
        }
        else
        {
            st++;
            ans+='R';
        }
    }
    cout<<ans<<"\n";
    return 0;
}
