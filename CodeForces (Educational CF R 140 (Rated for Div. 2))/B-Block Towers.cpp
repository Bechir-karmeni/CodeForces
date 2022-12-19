#include <bits/stdc++.h>
using namespace std;
#define ll long long 

  int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      ll a[n-1];
      ll temp;
      cin>>temp;
      for(int i=0; i<n-1; i++)
      cin>>a[i];
      sort(a,a+n-1);
      for(int i=0; i<n-1; i++){
          if(a[i]>temp){
              if((a[i]-temp)%2)
              temp+=(a[i]-temp)/2+1;
              else
              temp+=(a[i]-temp)/2;
          }
      }
     cout<<temp<<endl;
    }
      return 0;
  }