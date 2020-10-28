#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int i,n,k;
    cin>>n>>k;
    int f[100000]={};
    f[1]=1;
    i=1;
    while(1){
        if(f[i]>n){
            break;
        }
        i++;
        for(int j=max(1ll,i-k);j<i;j++){
            f[i]+=f[j];
        }
    }
    vector<int> ans;
    ans.push_back(0);
    for(int j=i;j>=1;j--){
        if(f[j]<=n){
            n-=f[j];
            ans.push_back(f[j]);
        }
    }
    cout<<ans.size()<<"\n";
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<"\n";x
}



//
//k=5
//F(k, n) = F(k, n - 1) + F(k, n - 2) + ... + F(k, n - k),
//
//f(1)=f(0)+f(-1)
//
//
//n<k
//f(n)=0
//f(k)=1
//
//
//
//s=10
//
//
//k=2
//
//1 1 2 3 5 8 13
//
//s
//k
//
//8 2 =sum(8+2)=10
//
//
//proof:-
//
//mathematical induction :-
//s ->it is possible to reach s
//
//sum of all elements in that seq>=s
//1.{1} =1
//
//2. lets assume it is true for Sn
//
//
//3. S(n+1) =Sn + a(n+1)
//
//any value that is <=S(n+1)
//
//a.random_ele >S(n)
//b.random_ele<=S(n) always true from 2
//
//
//a.a(n+1)+S(n) >random_ele
//
//diff=S(n+1)-random_ele

//
//s<=10^9
//k=2
//
//fibb ~100
