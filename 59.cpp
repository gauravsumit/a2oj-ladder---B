#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n,d;cin>>n>>d;
    int len=0;
    int64_t temp=n;
    int64_t to_add=0;
    int64_t num=n;
    while(1)
    {
        if(temp==0)
        {
            break;
        }
        int64_t t_ans=num;
        int val=0;
        if(temp%10!=9)
        {
            val=1;
        }
        temp/=10;
        len++;
        temp-=val;
        to_add*=10;
        to_add+=9;
        num=temp*pow(10,len)+to_add;
        if(n-num>d)
        {
            cout<<t_ans<<"\n";
            return 0;
        }
    }
    cout<<to_add<<"\n";
    return 0;
}

//9->9*10+9 =99*10+9=999
//1029
//102-val
//102 9
//1028
//101 9
//1019
//1023
//999
//dif=24
//
//allowed=12
//



//
//1029  102
//
//
//
//999
//
//132 1
//132
//
//132 20
//129
//119



//1028
//
//102
//1019 ->9
//
//
//1029
//102
//
//10
//9
//9 99
//len=0
//10^len -1
//len=1
//9
//len=2
//99
//len=3
//999
//10^len+1
//
//
//222222
//222219
//222199
//221999
