#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

int main(){
    int t;cin>>t;
    while (t--){
        int n ;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){cin>>a[i]; }

        int f=0, s=0, c=0;
        for (int i=0; i<n ; i++){
            if (a[i] == i+1 && a[i]!=n-i){f++;}
            else if (a[i] == n-i && a[i]!=i+1) s++;
            else if (a[i] != n-i && a[i]!=i+1) c++;
        }
        if (s+c <= f){
            cout<<"First"<<endl;
        }
        else if (f+c < s){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        } 

    }
    
}