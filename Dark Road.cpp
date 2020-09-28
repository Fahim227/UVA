#include <bits/stdc++.h>
using namespace std;
long int parent[200008];
int cou=0;

//typedef pair<int,int> p;

/*struct Graph{

    int V,E;
    vector<pair<int,p > > edges;
    Graph(int V,int E){
        this->V=V;
        this->E=E;
    }
    void addEdge(int u,int v,int w){
        edges.push_back({w,{u,v}});
    }
    int kruskal();


};*/
long int find_set(long int i){
    if(parent[i]!= i){
        parent[i]=find_set(parent[i]);
    }
    return parent[i];
}
long int Union(long int x,long int y){

    if(find_set(x)==find_set(y)){
            return 0;

    }
    else{
        cou++;
        //cout<<cou<<" ";
        parent[find_set(x)]=find_set(y);
        return 1;

    }
}
//int Graph::
long int kruskal(vector<pair<long int,pair<long int,long int > > > edges,int V, int E){

     long int sum=0;
     int c=0;
     long int x,y;
     int co;
     for(int i=0;i<E;i++){
        x=edges[i].second.first;
        y=edges[i].second.second;
        co=Union(x,y);

        if(co!=0){
            //cout<<sum<<" ";
            sum+=edges[i].first;
        }
        if(cou==V){
            //cout<<sum<<" ";
            return sum;
        }


     }
     return sum;

}

int main(){
    long int n,e;
    while(cin>>n>>e){
            if(n==0 && e==0){
                break;
            }
        vector<pair<long int,pair<long int ,long int > > > edges;
        //memset(parent,-1,sizeof(parent));
        //make_set(n);
        for(int i=0; i<n; i++){
            parent[i]=i;
        }
        //Graph g(n,e);
        long int all=0;
        for(int i=0;i<e;i++){
            int x;cin>>x;
            int y;cin>>y;
            int w;cin>>w;
            all+=w;
            edges.push_back({w,{x,y}});
            //g.addEdge(w,x,y);


        }
        sort(edges.begin(),edges.end());
        /*for(int i=0;i<e;i++){
            cout<<edges[i].second.first<<" "<<edges[i].second.second<<" "<<edges[i].first<<" \n";
        }*/


        //cout<<sum<<"\n";
       // cout<<g.kruskal()<<"\n";
        //cout<<all<<"\n";*/
         cout<<all-kruskal(edges,n,e)<<"\n";
         cou=0;


    }
}
