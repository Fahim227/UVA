#include <bits/stdc++.h>
using namespace std;

int main(){
    int g,l,t;
    while(cin>>t){
        while(t--){
            cin>>g>>l;

           if(l%g!=0){
                cout<<"-1\n";
                continue;
           }

           else{
                   int flag=true;
                   int lp=l/g;
                   int k=sqrt(lp);
                   for(int i=1;i<=k;i++){
                        if(lp%i==0){
                            if(i<=lp/i){
                                if(__gcd(lp/i,i)==1){
                                     int bp=lp/i;
                                     int ap=i;
                                     cout<<(g*ap)<<" "<<(g*bp)<<"\n";
                                     flag=false;
                                     break;

                                }

                            }



                        }
                   }
                   if(flag){
                        cout<<"-1\n";
                   }
              }
        }

    }

}
