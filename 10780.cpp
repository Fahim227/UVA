#include <bits/stdc++.h>
#define num 1000000
#define INF 2000000000
#define loopf(i,n) for(int i=0;i<n;i++)
#define loopr(i,n) for(int i=n-1;i>=0;i--)
#define ll long long int
using namespace std;
int a[1000000];
vector<int> prime;
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

/*int factorization(int p,int n){
    int cnt=0;
    while(n%p==0){
        n/=p;
        cnt++;
    }
    /*for(int i=0;i<prime.size() && prime[i]<=sqrt(n);i++){
       int cnt=0;
       while(n%prime[i]==0){
            n/=prime[i];
            cnt++;
       }
       cout<<prime[i]<<" "<<cnt<<"\n";
    }

    if(n>2){
        cout<<n<<"\n";
    }

    */

    /*return cnt;
}*/
int power(int k,int n){
    int cnt=0;
    int temp=k;
    while(temp<=n){
        cnt+=n/temp;
        temp*=k;
    }
    return cnt;
}

int main(){
    seive();
    int m,n;
    int t;
    cin>>t;
        for(int i=1;i<=t;i++){
            cin>>m>>n;
            int p=0,ans=INF;
            bool flag=true;
            while(m>1){
                if(m%prime[p]==0){
                    int cnt=0;

                    while(m%prime[p]==0){
                        m/=prime[p];
                        cnt++;
                    }


                    int k=power(prime[p],n);
                    //cout<<cnt<<" "<<k<<"\n";
                    if(k<cnt){
                        ans=-1;
                        break;
                    }
                    ans=min(ans,k/cnt);
                }
                p++;
            }
            if(ans==INF) ans=-1;

            //ans=Solve(n,m);
            //cout<<ans;
            cout<<"Case "<<i<<":\n";
            if(ans>0){
                   cout<<ans<<"\n";

            }
            else{
                 puts("Impossible to divide");
            }


        }


}

