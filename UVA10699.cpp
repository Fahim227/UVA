 #include <bits/stdc++.h>
#define n 1000000
using namespace std;
int a[1000000];
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
 vector<int>  factors(int num,vector<int> fac){

    int div=1;
    for(int i=0;i<=sqrt(num);i++){

        if(num%prime[i]==0){

            int c=0;
            while(num%prime[i]==0){
                c++;
               // cout<<prime[i]<<" ";
                fac.push_back(prime[i]);
                num/=prime[i];
            }
            div*=(c+1);
        }

    }
    if(num!=1){
        //do something
        //cout<<num;
       fac.push_back(num);
    }
   return fac;
}
int main(){
    seive();
    /*for(int i=0;i<prime.size();i++){
        cout<<prime[i]<<" ";
    }*/
    //cout<<a[1000000]<<" ";
    /*factors(516650);
    cout<<"\n";
    factors(238336);
    cout<<"\n";
    factors(636916);*/

  int num;
  while(cin>>num){
        vector<int> fac;
    if(num==0){
        break;
    }
    else{
        fac=factors(num,fac);
        sort(fac.begin(),fac.end());

        int hold=fac[0];
         int res=1;
        for(int i=1;i<fac.size();i++){
            if(hold!=fac[i]){
                res++;
                hold=fac[i];
            }




        }
        cout<<num<<" : "<<res<<"\n";
    }

  }

}
