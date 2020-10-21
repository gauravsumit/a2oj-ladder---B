#include<bits/stdc++.h>
using namespace std;
#define int int64_t
vector<int> graph[(int)1000];
int visited[1000];
bool flag=false;
void dfs(int pos,int end)
{
    visited[pos]=1;
    if(pos==end)
    {
        flag=true;
        return;
    }
    for(int i:graph[pos])
    {
        if(visited[i]==0)
        {
            dfs(i,end);
        }
    }
}
int32_t main()
{
    int n;cin>>n;
    vector<pair<int,int> > vp;
    while(n--)
    {
        int x,a,b;cin>>x>>a>>b;
        if(x==1)
        {
            for(int i=0;i<vp.size();i++)
            {
                if((vp[i].first<a and a<vp[i].second ) ||( vp[i].first <b and b<vp[i].second))
                {
                    graph[vp.size()].push_back(i);
                }
                if((a<vp[i].first and vp[i].first<b )|| (a< vp[i].second and vp[i].second<b))
                {
                    graph[i].push_back(vp.size());
                }
            }
            vp.push_back(make_pair(a,b));
        }
        else
        {
            a-=1;
            b-=1;
            for(int i=0;i<110;i++)
            {
                visited[i]=0;
            }
            flag=false;
            dfs(a,b);
            if(flag)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}





//dfs -> i1(a,b)  -> i2(c,d)
//
//1 .add edge when c < a < d or c < b < d
//
//edge add -> for all intervals
//new interval
//
//
//2nd type query -> dfs i1->i2

//
//i1-> i2
//
//i2->i1
//
//i2= new interval
//i1=all old interval
