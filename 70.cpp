#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000*1000*1000+7
int32_t main()
{
    int n;cin>>n;
    vector<int> r0,r1,r2;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x%3==0)
        {
            r0.push_back(x);
        }
        else if(x%3==1)
        {
            r1.push_back(x);
        }
        else
        {
            r2.push_back(x);
        }
    }
    sort(r0.begin(),r0.end());
    sort(r1.begin(),r1.end(),greater<int>() );
    sort(r2.begin(),r2.end(),greater<int>());
    if(r0.size()>0 and r0[0]==0)
    {
        vector<int> ans,ans2,ans3,ans1;
        for(int i:r0)
        {
            ans.push_back(i);
            ans2.push_back(i);
            ans3.push_back(i);
        }
        int t1=r1.size()/3;
        int t2=r2.size()/3;
        t1*=3;
        t2*=3;
        for(int i=0;i<t1;i++)
        {
            ans.push_back(r1[i]);
        }
        for(int i=0;i<t2;i++)
        {
            ans.push_back(r2[i]);
        }
        for(int i=0;i<min(r1.size()%3,r2.size()%3);i++)
        {
            ans.push_back(r1[t1]);
            ans.push_back(r2[t2]);
            t1++;
            t2++;
        }
        if(r2.size()>0)
        {
            int last_r2=r2[r2.size()-1];
            r2.pop_back();
            t1=r1.size()/3;
            t2=r2.size()/3;
            t1*=3;
            t2*=3;
            for(int i=0;i<t1;i++)
            {
                ans2.push_back(r1[i]);
            }
            for(int i=0;i<t2;i++)
            {
                ans2.push_back(r2[i]);
            }
            for(int i=0;i<min(r1.size()%3,r2.size()%3);i++)
            {
                ans2.push_back(r1[t1]);
                ans2.push_back(r2[t2]);
                t1++;
                t2++;
            }
            r2.push_back(last_r2);
        }
        if(r1.size()>0)
        {
            r1.pop_back();
            t1=r1.size()/3;
            t2=r2.size()/3;
            t1*=3;
            t2*=3;
            for(int i=0;i<t1;i++)
            {
                ans3.push_back(r1[i]);
            }
            for(int i=0;i<t2;i++)
            {
                ans3.push_back(r2[i]);
            }
            for(int i=0;i<min(r1.size()%3,r2.size()%3);i++)
            {
                ans3.push_back(r1[t1]);
                ans3.push_back(r2[t2]);
                t1++;
                t2++;
            }
        }
        sort(ans3.begin(),ans3.end(),greater<int>() );
        sort(ans2.begin(),ans2.end(),greater<int>() );
        sort(ans.begin(),ans.end(),greater<int>() );
        if((ans.size()>ans2.size() || (ans.size()== ans2.size() and ans>=ans2)) and (ans.size()>ans3.size() || (ans.size()== ans3.size() and ans>=ans3)))
        {
            ans1=ans;
        }
        else if(ans3.size()>ans2.size() ||(ans2.size()==ans3.size() and ans2>=ans3))
        {
            ans1=ans3;
        }
        else
        {
            ans1=ans2;
        }
        if(ans1[0]==0)
        {
            cout<<"0\n";
            return 0;
        }
        for(int i=0;i<ans1.size();i++)
        {
            cout<<ans1[i];
        }
        cout<<"\n";
    }
    else
    {
        cout<<"-1\n";
    }
    return 0;
}




//
//012
//1230
//2 ,3,5
//digit_sum%3==0
//2,4,6,8,0
//0,5


x%3=0
x%3=1
x%3=2

1+2

3*1

3*2


10->1
9 ->use kar lia total sum will be div by 3


rem 1->2
rem 2->1
1 from rem1 1 from rem2


sz=3 rem 1 = 1 1 1
sz=2 rem 2= 2 2


1 1 1

2 2 1 1

rem2 pop_back

sz=3 rem2= 2 2 2
sz=2 rem1 =1 1

2 2 2

2 2 1 1



0  00  00
