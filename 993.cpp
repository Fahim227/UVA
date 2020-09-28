#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
   ll n;
   cin>>n;
   vector<ll> v;
   ll m=n;
   for(int i=9;i>=2;i--){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
   }

   sort(v.begin(),v.end());
   /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
   }*/
   if(n>9){
       cout<<"-1\n";
   }
   else if(m==1){
       cout<<m<<"\n";
   }
   else{
       for(int i=0;i<v.size();i++){
           cout<<v[i];
       }
       cout<<"\n";
   }
   /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
   }*/
   //cout<<n<<" ";
   /*if(n>1 || v.size()==0){
        cout<<"-1\n";
   }
   else{
       if(v.size()==1){
           cout<<v[0]<<"\n";
       }
       else{
            ll prod=1;
           for(int i=1;i<v.size();i++){
               ll temp=v[i];
               while(temp){
                   prod*=(temp%10);
                   temp/=10;
               }
               //prod*=v[i];
           }
           if(prod==m){
                for(int i=1;i<v.size();i++){
                    cout<<v[i];
                }
           }
           else{
                cout<<"-1";
           }
           cout<<"\n";
       }
   }*/


}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    while(cin>>t){
        while(t--){
            solve();
        }
    }
}
