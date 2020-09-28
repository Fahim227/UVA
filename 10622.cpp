#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll powUp(int i, int p)
{
    ll sum = i;
    for ( int k = 2; k <= p; k++ ) {
        sum *= i;
    }

    return sum;
}
int main(){
    ll n;
    while(cin>>n){
         if(n==0) break;
         if(n>0){
            bool flag=false;
            ll len = sqrt(n);
                for(int i=2;i<=len;i++){
                    int p=2;
                    ll ans=i;
                    while(ans<n){
                        ans=powUp(i,p);
                        p++;
                    }
                    if(ans==n){
                        //cout<<p<<"\n";
                        cout<<p-1<<"\n";
                        flag=true;
                        break;
                    }
                }
                if(!flag){
                    cout<<"1\n";
                }


         }
         else{
            bool flag=false;
            int len = sqrt(n * -1);
                for(ll i=-2;i>=(-len);i--){
                    ll p=2;
                    ll ans=i;
                    while(ans>n){
                        ans = powUp(i,p);
                        p++;
                    }
                    //cout<<ans<<" "<<p<<"\n";
                    if(ans==n){
                        //cout<<p<<"\n";
                        cout<<p-1<<"\n";
                        flag=true;
                        break;
                    }
                }
                if(!flag){
                    cout<<"1\n";
                }
         }

    }
}
