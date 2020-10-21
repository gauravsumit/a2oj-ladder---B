#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
bool check_date_month_year(string date,string month,string year)
{
    int date_=stof(date);
    int month_=stof(month);
    int year_=stof(year);
    if(year_>2015||year_<2013)
    {
        return false;
    }
    if(month_>12||month_<=0)
    {
        return false;
    }
    map<int,int> m_days;
    for(int i=1;i<13;i++)
    {
       if(i<8)
       {
           if(i&1)
           {
               m_days[i]=31;
           }
           else
           {
               m_days[i]=30;
           }
       }
        else
        {
            if(i&1)
            {
                m_days[i]=30;
            }
            else
            {
                m_days[i]=31;
            }
        }
    }
    m_days[2]=28;
    if(m_days[month_]<date_||date_<=0)
    {
        return false;
    }
    return true;
}
int32_t main()
{
    map<string,int > ans;
    string ss;cin>>ss;
    for(int i=0;i<ss.length()-9;i++)
    {
        bool flag=true;
        for(int j=i;j<i+10;j++)
        {
            if(j-i==2||j-i==5)
            {
                if(ss[j]!='-')
                {
                    flag=false;
                    break;
                }
            }
            else
            {
                if(ss[j]=='-')
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            if(check_date_month_year(ss.substr(i,2),ss.substr(i+3,2),ss.substr(i+6,4)))
            {
                ans[ss.substr(i,10)]++;
            }
        }
    }
    int count=-1;
    string ans_string="";
    for(auto i:ans)
    {
        if(i.second>count)
        {
            count=i.second;
            ans_string=i.first;
        }
    }
    cout<<ans_string<<"\n";
    return 0;
}



//
//dd-mm-yyyy
//
//find all valid dates -> print date with max occ
//
//map<string,int>
