#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,limit;cin>>sum>>limit;
    map<int,vector<int> > mp;
    int total_sum=0;
    for(int i=1;i<=limit;i++)
    {
        bitset<32> number=i;
        for(int j=0;j<32;j++)
        {
            if(number[j]==1)
            {
                mp[-1<<j].push_back(i);
                total_sum+=(1<<j);
                break;
            }
        }
    }
    vector<int> ans;
    if(sum>total_sum)
    {
        cout<<"-1\n";
    }
    else
    {
        for(auto i:mp)
        {
            for(int j:i.second)
            {
                if(sum>=-i.first)
                {
                    sum+=i.first;
                    ans.push_back(j);
                }
                else
                {
                    break;
                }
            }
        }
        cout<<ans.size()<<"\n";
        for(int i:ans)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}



//sum
//
//limit =5 -> 1,2,3,4,5
//
//
//
//1-> 1   ->1
//2-> 10  ->2
//3->11  ->1
//4->100  -> 4
//5->101  ->1
//
//
//
//
//set<>
//max 1
// 2nd max 2
// 3rd max 3
//1 2 4



//-1 -> 1 3 5
//-2-> 2
//-4-> 4



//sum

//4->1
//
//number0f1>=numberof2>=numberof4


//
//00001
//00010
//00011
