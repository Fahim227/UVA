#include <bits/stdc++.h>
#define num 1000000
#define ll long long int
using namespace std;
int a[100000000];
vector<int> prime;
int factorcount[50000];
void seive(){
    a[1]=1;
    /*for(int i=4;i<=n;i+=2){
        a[i]=1;

    }*/
    prime.push_back(2);
    for(int i=3;i<=sqrt(num);i+=2){
        if(a[i]==0){
            for(int j=i*i;j<=num;j+=2*i) a[j]=1;
        }
    }
    for(int i=3;i<=num;i+=2){
        if(a[i]==0){
            prime.push_back(i);
        }
    }
}
bool check(ll n,ll m){
    //memset(factorcount,0,sizeof(factorcount));

    for(int i=0;i<prime.size() && prime[i]*prime[i]<=m;i++){
        //int temp=m;
        if(m%prime[i]==0){
            ll cnt=0;
            while(m%prime[i]==0){
                m/=prime[i];
                cnt++;
            }
            ll temp=prime[i],cntp=0;
            while(temp <= n){
                 cntp += n/temp;
                 temp*=prime[i];
            }
            if(cntp < cnt){
                return false;
             }

        }


    }
   // cout<<cntp<<" "<<cnt<<"n m"<<n<<" "<<m<<"\n";
    if(m!=1){
        if(n<m) return false;
    }

    /*for(int i=0;i<prime.size();i++){
        if(factorcount[prime[i]]<0) return false;
    }*/

    return true;
}

int main(){
    seive();
    ll n,m;
    while(cin>>n>>m){

        //bool divisible = ;
        /*if(n>=m){
            cout<<m<<" divides "<<n<<"\n";
            continue;
        }*/
        if(check(n,m)){
            cout<<m<<" divides "<<n<<"!\n";
        }
        else{
            cout<<m<<" does not divide "<<n<<"!\n";
        }



    }
}
