#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<long long int> vlli ;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define  vs v.size()
#define endl "\n"

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
     a[i]=s[i]-'0';

    int c[n+1];
    c[0]=0;
    rep(i,1,n+1)
    {
        c[i]=c[i-1]+a[i-1];
        
    }
    rep(i,0,n+1)
    {
        c[i]-=i;
    }
    unordered_map<long long int,long long int> m;
    rep(i,0,n+1)
    {
        m[c[i]]++;
    }
    long long int sum=0;
    for(auto x: m)
    {
        sum+=(x.second)*(x.second-1)/2;
        
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}