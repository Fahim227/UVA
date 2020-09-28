#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     ll b,p,m;
     while(cin>>b>>p>>m){
        ll prod=1;
        ll x=b;
        while(p){
            if(p & 1){
                prod=(prod*x)%m;

            }
            x=(x*x)%m;
            p/=2;

        }


        cout<<prod<<"\n";
     }
}
