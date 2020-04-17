#include <bits/stdc++.h>
//#include <boost/algorithm/string.hpp>
//#define num 1000
using namespace std;


int main(){
    //vector<int> v;
    int a[99];
    string s;
    int t;
    getline(cin,s);
    while(cin>>t){

         //string str="";
         for(int k=1;k<=t;k++){

             getline(cin,s);
             istringstream is(s);
             int n=0;
             while(is>>a[n]) ++n;
         //int si=sizeof(a,a+)
             int res=0;
             for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    res=max(res,__gcd(a[i],a[j]));
                }
             }
         cout<<res<<"\n";
         }


    }

}
