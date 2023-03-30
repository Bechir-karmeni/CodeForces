#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int a[n];
      map<int,int>m;
      for(int i=0;i<n;i++){
          cin>>a[i];
          m[a[i]]++;
      }
      sort(a,a+n);
      if(m.size()==1 && n!=1){
          cout<<"NO"<<endl;
      }
      else{
         cout<<"YES"<<endl; 
      if(n==1){
          cout<<a[0]<<" ";
      }
      
      
 else if(n%2==0){
      int k=0;
      int f=n-1;
      for(int i=0;i<n/2;i++){
          cout<<a[k]<<" "<<a[f]<<" ";
          k++;
          f--;
          
      }
  } 
  else{
      int k=0;
      int f=n-1;
      for(int i=0;i<n/2;i++){
          cout<<a[k]<<" "<<a[f]<<" ";
          k++;
          f--;
      }
      cout<<a[n/2]<<" ";
  }}
  
  cout<<endl;
  }
  return 0;
}