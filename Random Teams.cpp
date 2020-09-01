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
using namespace std;
#define int int64_t
int32_t main()
{
    int mini;
    int maxi;
    int n,m;cin>>n>>m;
    maxi = ((n-(m-1))*(n-(m-1)-1)/2);
    int sz=n/m;
    int rem=n%m;
    mini = rem*(sz+1)*(sz)/2 + (m-rem)*(sz)*(sz-1)/2;
    cout<<mini<<" "<<maxi<<"\n";
    return 0;
}


//5 3
//5%3=2
//
//2 2 1


// k
 

//k*(k-1)/2
//
//
//minimise -> teams ka dis k is minimised
//
//
//k= 10
//
//5 5
//
//10 10
//
//
//1 9
//
//
//9*8/2 = 36
//
//
//n*(n-1)/2
//
//
//((n)*(n/2 -1)/2)
