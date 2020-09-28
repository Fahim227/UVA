#include <bits/stdc++.h>
using namespace std;

int countdivisors(int n){
int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                cnt++;
            }
            else{
                cnt+=2;
            }

        }


    }
    return cnt;


}


int phi(int n){
    int res=n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            res-=res/i;

        }
    }
    if(n>1){
        res-=res/n;
    }
    return res;

}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
           cout<<countdivisors(n)<<"\n";
            int c=0;
            /*for(int i=1;i<=sqrt(n);i++){
                c+=phi(n)countdivisors(n);
            }*/
            //cout<<c<<"\n";
           int ans=n-phi(n)-countdivisors(n)+1;
           cout<<ans<<"\n";

    }


}
