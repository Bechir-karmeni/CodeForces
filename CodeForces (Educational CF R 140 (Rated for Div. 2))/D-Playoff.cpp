#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin>>n;
    string s ; cin>>s;
    int o=0, z=0;
    for (auto i: s){ if(i=='1') o++; else z++;}
    for(int i= pow(2,o); i<= pow(2,n) - (pow(2,z)-1); i++) cout<<i<<" ";
    cout<<endl;
}
