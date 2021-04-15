//
//  infrun_80.cpp
//  algo
//
//  Created by 박효정 on 2021/04/16.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct edge{
    int vex;
    int dis;
    edge(int a,int b){
        vex=a;
        dis=b;
    }
    bool operator <(const edge &b)const{
        return dis>b.dis;
    }
};

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    priority_queue<edge> q;
    vector<pair<int, int>> graph[30];
    int i,n,m,a,b,c;
    
    cin>>n>>m;
    vector<int> dist(n+1,2147000000);
    
    for(i=1;i<=m;i++){
        cin>>a>>b>>c;
        graph[a].push_back(make_pair(b, c));
        
    }
    
    q.push(edge(1,0));
    dist[1]=0;
    while(!q.empty()){
        int now=q.top().vex;
        int cost=q.top().dis;
        q.pop();
        if(cost>dist[now]) continue;
        for(i=0;i<graph[now].size();i++){
            int next=graph[now][i].first;
            int nextDis=cost+graph[now][i].second;
            if(dist[next]>nextDis){
                dist[next]=nextDis;
                q.push(edge(next,nextDis));
            }
        }
        
        
        
        
    }
    
    for(i=2;i<=n;i++){
        if(dist[i]!=2147000000) cout<<i<<" : "<<dist[i]<<"\n";
        else cout<<i<<" : impossible"<<"\n";
            
    }
    
    
    
    return 0;
}
