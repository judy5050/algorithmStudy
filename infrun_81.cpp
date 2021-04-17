//
//  infrun_81.cpp
//  algo
//
//  Created by 박효정 on 2021/04/16.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int dist[101];

struct edge{
  
    int s;
    int e;
    int val;
    edge(int a, int b,int c){
        s=a;
        e=b;
        val=c;
    }
    
    
};


int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int i,n,m,a,b,c,j,s,e;
    
    cin>>n>>m;
    vector<edge>ed;
    for(i=1;i<=m;i++){
        cin>>a>>b>>c;
        ed.push_back(edge(a,b,c));
    }
    
    for(i=1;i<=n;i++){
        dist[i]=2147000000;
    }
    
    cin>>s>>e;
    dist[s]=0;
    for(i=1;i<n;i++){
        for(j=0;j<ed.size();j++){
            int u=ed[j].s;
            int v=ed[j].e;
            int w=ed[j].val;
            if(dist[u]!=2147000000&&dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
            }
        }
       
    }
    
    for(j=0;j<ed.size();j++){
        int u=ed[j].s;
        int v=ed[j].e;
        int w=ed[j].val;
        if(dist[u]!=2147000000&&dist[u]+w<dist[v]){
            cout<<"-1"<<"\n";
            exit(0);
        }
    }
    
    cout<<dist[e]<<"\n";
    
    
    return 0;
}

