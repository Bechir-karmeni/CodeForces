#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f;
        int temp = 0;
        cin>>a>>b>>c>>d>>e>>f;
        if(a!=c and c!=d and c!=e) temp=1 ;
        else if(b!=d and b!=f and  d!=f) temp = 1;
        else temp = 0;
        if(temp)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
return 0;  
}