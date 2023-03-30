#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    long long n = 0 , k = 0;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=1;i<=n;i++)
        a[i -1]=i;
    int i=0;
    int j= n-1;
    while(i<j)
        cout<<a[j--]<<" "<<a[i++]<<" ";
    if (n%2)
        cout<<(n+1)/2<<" ";
    cout<<"\n";
}
 int main() {
     ll t;
     cin>>t;
     for(int i=1;i<=t;i++){
         solve();
     }
    return 0;
}