#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        int brr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
            brr[i]=arr[i];
        }
        sort(brr, brr+ 4);
        int a = brr[0], b=brr[3];
        if((arr[0]==a && arr[3]==b) || (arr[1]==a && arr[2]==b)){
            cout<<"YES"<<endl;
        }
        else if((arr[3]==a && arr[0]==b) || (arr[2]==a && arr[1]==b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}