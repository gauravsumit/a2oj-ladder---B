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
#include<string>
#include<unordered_set>
#include<iomanip>
#include<cstdlib>  //for srand()
using namespace std;
#define int int64_t
int N;
string names[101];
int taxi[101];
int pizza[101];
int girl[101];
 
bool isTaxi(string &pn) {
    bool t = true;
    for (int i = 1; i < 8 and t; i++) {
        if (i == 2 or i == 5) continue;
        if (pn[i] != pn[0]) t = false;
    }
    return t;
}
 
bool isPizza(string &pn) {
    bool t = true;
    char m = pn[0];
    for (int i = 1; i < 8 and t; i++) {
        if (i == 2 or i == 5) continue;
        if (pn[i] >= m) t = false;
        m = pn[i];
    }
    return t;
}
 
int32_t main () {
    cin>>N;
    int bt = 0,
        bp = 0,
        bg = 0;
 
    for (int i = 0 ; i < N; i++) {
        int count;
        cin>>count;
        cin>>names[i];
 
        for (int j = 0; j < count; j++) {
            string pn;
            cin>>pn;
            if (isTaxi(pn)) {
                ++taxi[i];
                if (taxi[i] > taxi[bt]) bt = i;
            } else if (isPizza(pn)) {
                ++pizza[i];
                if (pizza[i] > pizza[bp]) bp = i;
            } else {
                ++girl[i];
                if (girl[i] > girl[bg]) bg = i;
            }
        }
    }
 
    int tc = 0,
        pc = 0,
        gc = 0;
 
    vector<int> T, P, G;
    for (int i =0; i < N; i++) {
        if (taxi[i] == taxi[bt]) T.push_back(i);
        if (pizza[i] == pizza[bp]) P.push_back(i);
        if (girl[i] == girl[bg]) G.push_back(i);
    }
 
    cout<<"If you want to call a taxi, you should call: " << names[T[0]];
    for (int i = 1; i < T.size(); i++) {
        cout<<", " + names[T[i]];
    }
    cout << "." <<endl;
 
    cout<<"If you want to order a pizza, you should call: " << names[P[0]];
    for (int i = 1; i < P.size(); i++) {
        cout<<", " + names[P[i]];
    }
    cout << "." <<endl;
 
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: " << names[G[0]];
    for (int i = 1; i < G.size(); i++) {
        cout<<", " + names[G[i]];
    }
    cout << "." <<endl;
}
