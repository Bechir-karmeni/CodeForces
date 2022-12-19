#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long 
#define push_back



void solve()
{
    int n,k;
    cin>>n>>k;
    int hello[n],filamen[n];
    for(int i=0; i<n; i++) cin>>hello[i];
    for(int i=0; i<n; i++) cin>>filamen[i];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    for(int i=0; i<n; i++){
        pq.push({filamen[i],hello[i]});
    }
    int ans=k;
    while (k>0 and !pq.empty())
    {
        while(!pq.empty() and pq.top().second <= ans){
            pq.pop();
        }
        k -= pq.top().first;
        ans += k;
    }
    if (pq.empty()){
        cout<<"yes"<<endl;
    }else cout<<"no"<<endl;

}


int  main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
