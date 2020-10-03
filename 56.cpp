#include<iostream>
using namespace std;
int main()
{
    string ss;cin>>ss;
    if(ss.find('.')>ss.length())
    {
        ss+=".00";
    }
    string ans="";
    int decimal_len=ss.find('.');    //2010.00
    
    //2011   332,011
    ss+="0";
    if(ss[0]=='-')
    {
        ans+="($";
        int len=decimal_len-1;
        for(int i=1;i<decimal_len;i++)
        {
            ans+=ss[i];
            len--;
            if(len%3==0 and len!=0)
            {
                ans+=',';
            }
        }
        for(int i=decimal_len;i<=decimal_len+2;i++)
        {
            ans+=ss[i];
        }
        ans+=")";
    }
    else
    {
        int len=decimal_len;
        ans+="$";
        for(int i=0;i<decimal_len;i++)
        {
            ans+=ss[i];
            len--;
            if(len%3==0 and len!=0)
            {
                ans+=',';
            }
        }
        for(int i=decimal_len;i<=decimal_len+2;i++)
        {
            ans+=ss[i];
        }
    }
    cout<<ans<<"\n";
    return 0;
}




//s=  2012.00
//
//s= 2012.00


// find -> string



//201111.34
//
//
//2011.000
//
//2011.000
//
//
//-201
//($201.00)
