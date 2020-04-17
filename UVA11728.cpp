#include <bits/stdc++.h>
#define ll long long
#define n 10000
using namespace std;
int a[10000];
vector<int> prime;
void seive(){
    a[1]=1;
    /*for(int i=4;i<=n;i+=2){
        a[i]=1;

    }*/
    prime.push_back(2);
    for(int i=3;i<=sqrt(n);i+=2){
        if(a[i]==0){
            for(int j=i*i;j<=n;j+=2*i) a[j]=1;
        }
    }
    for(int i=3;i<=n;i+=2){
        if(a[i]==0){
            prime.push_back(i);
        }
    }
}
ll SOD(int num){
    ll sum=1;
    for(int i=0;i<=sqrt(num);i++){

        if(num%prime[i]==0){

            int c=0;
            while(num%prime[i]==0){
                c++;
                num/=prime[i];
            }
            sum*=((pow(prime[i],(c+1))-1)/(prime[i]-1));
        }

    }
        if(num!=1){
        //do something
         //sum+=num;
         sum *= (pow(num, 2) - 1) / (num - 1);
    }
    return sum;







}
int main(){
    ios_base::sync_with_stdio(false);
    seive();

      int solution[1001];
      memset(solution,-1,sizeof(solution));
      for(int i=1;i<=1000;i++){
            ll sum=SOD(i);

            if(sum<=1000){
                solution[sum]=i;


            }

      }

    int c=0;
    int num;
    while(cin>>num){
            c++;


        if(num==0){
                break;
        }
        else{

         cout<<"Case "<<c<<": "<<solution[num]<<"\n";


        }
         //cout<<num<<"\n";
    }
   //
 }
