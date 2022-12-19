#include <iostream>  
#include <string>  
using namespace std;  

void solve(){
        int d,f;
        cin>>d>>f;
        int h=1;
        cout<<h<<" ";
        for(int i=1;i<d;i++){
                if(f-h-i+1>=d-i){
                        h+=i;
        }else h++;
        cout<<h<<" ";
                }
        cout<<endl;
}


int main()
{       

        int t;
        cin>>t;
        while(t--)
        {
                solve();
                

                


        }
        return(0);
}