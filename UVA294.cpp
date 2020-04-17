#include <bits/stdc++.h>
//#define n 10000
#define ll long long int
using namespace std;

ll countdivisors(ll num){
    ll cnt=0;
    for(ll k=1;k<=sqrt(num);k++){
        if(num%k==0){
            if(num/k==k){
                cnt++;
            }
            else{
                cnt+=2;
            }
        }
    }
    return cnt;
}

int main(){
    ll n,i,j,k,l,p,h,t,mx,answer;

   while(scanf("%lld",&t)!=EOF)
	{
	 while(t--)
	 {
	  scanf("%lld %lld",&l,&h);
	  	 mx=countdivisors(l);
	  	 answer=l;
	  	 for(j=l+1;j<=h;j++){
            k=countdivisors(j);
            if(k>mx){
			 mx=k;
			 answer=j;
		     }
		 	}
		 printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,answer,mx);
	}
	}
}
