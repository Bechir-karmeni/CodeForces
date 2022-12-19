#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve(){
int hello;
cin>>hello;

int muaedwe[hello];
for (int i=0; i<hello; i++) cin>>muaedwe[i];

int fregfeg = muaedwe[0];
int refvd = muaedwe[0];
for(int i=1; i<hello; i++){
    fregfeg = fregfeg | muaedwe[i];
    refvd = refvd & muaedwe[i];
    }
    cout<<fregfeg-refvd<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;


}