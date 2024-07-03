#ifdef LOGX
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i,s,n) for(int i=s;i<(int)n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define vv vector
const int big=1e9+7;
//const int big=998'244'353;
const char newl='\n';
const int inf=1e9+10;
const ll INF=ll(1e18)+10;
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};

template<typename T>
T exp(T x,ll y,T e){
    while(y){
        if(y&1)e*=x;
        x*=x;
        y/=2;
    }
    return e;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(30);


}
using state=string::const_iterator; // 構文解析用