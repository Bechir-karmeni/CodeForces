#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pp push_back

void solve(){
    int n ;
    cin >> n ;
    int ans=1;
    for (int i = 0; i <n; i++){
        int x;
        cin >> x;
        ans = ans*x;
    }
    ans = ans+n-1;
    cout << ans*2022;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}