//#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#include <math.h>
#include <string>
#include <map>
#include <set>
#include <functional>
#include <stack>
#include <queue>
#include <array>
#include <list>
#include <limits>
#include <numeric>
#include <climits>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <cstring>
#include <bitset>
#include <queue>
#include <iostream>
#include <algorithm>
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define mii map<int,int>
#define pii pair<int,int>
#define loop(n) for(int i=0;i<n;i++)
#define in(a,n) int n; cin>>n; vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
#define output(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<"\n";
#define fastIO ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define ll long long int
#define fi first
#define pno cout<<"NO\n"
#define pys cout<<"YES\n"
#define se second
#define pb push_back
#define eb emplace_back //faster than push_back
#define mod1 1000000007
#define mod2 998244353
#define dtb(n,x) bitset<n>(x).to_string()
#define INF 9223372036854775807
#define dist(x, y) sqrt(abs(x) +abs(y))
//const ll SZ=1000005;
#include <iostream>
using namespace std;
 
 
//vector<int> primes(SZ+1,1);
//void sieve() //Sieve of Eratosthenes
//{
//    primes[0]=primes[1]=0;
//    for(int i=2;i<=sqrt(SZ);i++)//To find primes
//    {
//        if(primes[i]==1)
//        {
//            for(int j=2*i;j<=SZ;j+=i)
//                primes[j]=0;
//        }
//    }
//}
 
//ll lcm(ll a, ll b)
//{
//    return (a/__gcd(a, b) * b);
//}
 
//int isPrime(int n)//To check prime T(sqrt(n))
//{
//    for(int i=2;i<=sqrt(n);i++)
//    if(n%i==0)
//        return 0;
//    return 1;
//}
 
//void dfs(int x,int f,int to)//path from x to to
//{
//    st[++top]=x;
//    if(x==to)
//    {
//        cout<<top<<endl;
//        for(int i=1;i<=top;i++)
//        cout<<st[i]<<" ";
//        cout<<endl;
//    }
//    for(int y:g[x])
//    {
//        if(y^f)
//        dfs(y,x,to);
//    }
//    top--;
//}
 
 
//struct DSU
//{
//    vector<int> par,rnk,sz;
//    int c;
//    DSU(int n): par(n+1),rnk(n+1,0),sz(n+1,1),c(n)
//    {
//        for(int i=0;i<n;i++)
//            par[i]=i;
//    }
//
//    int find(int i)
//    {
//        return(par[i]==i?i:par[i]=find(par[i]));
//    }
//
//    bool same(int i,int j)
//    {
//        return find(i)==find(j);
//    }
//
//    int getsize(int i)
//    {
//        return sz[find(i)];
//    }
//
//    int count()
//    {
//        return c;  //Connected components
//    }
//
//    int merge(int i,int j)
//    {
//        if((i==find(i))==(j==find(j)))
//            return -1;
//        c--;
//        if(rnk[i]>rnk[j])
//            swap(i,j);
//        par[i]=j;
//        sz[j]+=sz[i];
//        if(rnk[i]==rnk[j])
//            rnk[j]++;
//        return j;
//    }
//};
 
ll power(ll x,ll mod,ll n) //Modular binary exponent
{
    if(n==0)       return 1;
    else if(n==1)  return x;
    else if(n%2)   return (x*power((x*x)%mod,mod,n/2))%mod;
    else           return (power((x*x)%mod,mod,n/2));
}
 
//ll gcd(ll a, ll b)//Fast GCD
//{
//    if (a == 0)
//        return b;
//    return gcd(b % a, a);
//}
 
//ll logarithm(ll a,ll b)//Floor value of log(a) with base:b
//{
//    ll tmp=1,out=0;
//    while(tmp<=a)
//    {
//        tmp*=b;
//        out++;
//    }
//    return out-1;
//}
 
//--------------------------------CODE STARTS HERE----------------------------------------
 
 
//4
//2 4 10
//2 3 4 5 6 7 10 11 12 13
//->10
 
//FFFFTTTTT
 
bool check(ll h,ll n,vector<ll> a,ll k)
{
    for(int i=1;i<n;i++)
    {
        h-=min(k,a[i]-a[i-1]);
        if(h<=0)
            return true;
    }
    h-=k;
    return h<=0;
}
 
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        ll l=0,r=1e18,ans=1e18;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            
            if(check(h,n,a,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        
        cout<<ans<<"\n";
        
    }
}
 
int32_t main()
{
    solve();
}