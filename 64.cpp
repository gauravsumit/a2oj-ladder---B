#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;cin>>n;
    int length=0;
    if(n.length()%2!=0)
    {
        length=n.length()+1;
    }
    else
    {
        string comp="";
        for(int i=0;i<n.length()/2;i++)
        {
            comp+='7';
        }
        for(int i=0;i<n.length()/2;i++)
        {
            comp+='4';
        }
        if(comp<n)
        {
            length=n.length()+2;
        }
        else
        {
            length=n.length();
        }
    }
  //  cout<<length<<"\n";
    string comp="";
    for(int i=0;i<length/2;i++)
    {
        comp+='4';
    }
    for(int i=0;i<length/2;i++)
    {
        comp+='7';
    }
    //9>47
    //cout<<comp<<"\n";
    do {
        
        
        if(comp>=n || comp.length()>n.length())
        {
            cout<<comp<<"\n";
            return 0;
        }
        
    }while(next_permutation(comp.begin(),comp.end()));
    return 0;
}
//3
//4->digit ans
//
//6-> digit number  900 000
//                  777 444
//1 2 3 -> 2 1 3
