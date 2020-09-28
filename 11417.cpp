#include <bits/stdc++.h>
#define num 10000
using namespace std;

int main(){
    int n;
    while(cin>>n){

        if(n==0){
            break;
        }
        else{
            long ans=0;
            for(int i=1;i<n;i++){
                for(int j=i+1;j<=n;j++){
                    ans+=__gcd(i,j);
                }
            }
            cout<<ans<<"\n";
        }


    }


}
