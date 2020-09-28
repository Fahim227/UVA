#include <bits/stdc++.h>
#define ll long long int
//#define n 10002
using namespace std;

int multiply(int nm,int res[],int res_size);

void factorial(int num){
    //memset(res,0,sizeof(res));
    int res[100000];
    res[0]=1;
    int res_size=1;
    for(int i=2;i<=num;i++){
        res_size = multiply(i,res,res_size);
    }
    //cout<<res_size;
    for(int j=0;j<res_size;j++){
        //cout<<res[j];
        if(res[j]){
            cout<<res[j];
            break;
        }
    }
    cout<<"\n";

}
int multiply(int nm,int res[],int res_size){
    int carry=0;

    for(int i=0;i<res_size;i++){
        int prod = res[i]*nm + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
   // cout<<carry<<" ";

    while(carry){
        res[res_size]=carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;

}


int main(){
    ios_base::sync_with_stdio(false);
    int num;
    while(cin>>num){
            cout<<setw(5)<<num<<" -> ";
            factorial(num);

    }
}
