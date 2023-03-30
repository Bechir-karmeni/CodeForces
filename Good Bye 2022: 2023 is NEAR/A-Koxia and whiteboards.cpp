#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        long long int a[n];
        long long int b[m];
        long long int sum = 0;
        priority_queue <int, vector<int>, greater<int>> p;

        for(int i=0;i<n;i++){
        cin>>a[i];
        p.push(a[i]);
        }
        long long int bsum=0;
        for(int i=0;i<m;i++){
        cin>>b[i];
        }
       for(int i=0; i<m; i++) {      
        p.pop();
        p.push(b[i]);      
    }
 
    while(!p.empty()) {      
        sum+=p.top();
        p.pop();
    }
    cout<<sum<<endl;
    }
}