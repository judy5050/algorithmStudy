//
//  1504.cpp
//  algo
//
//  Created by 박효정 on 2021/06/15.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;

vector<pair<int, int>> graph[801];
int d[801];

void dijkstra(int s){
    priority_queue<pair<int, int>>pq;
    pq.push({0,s});
    d[s]=0;
    while (!pq.empty()) {
        int val=-pq.top().first;
        int now=pq.top().second;
        pq.pop();
        if(d[now]<val) continue;
        
        for(int i=0;i<graph[now].size();i++){
            if(d[graph[now][i].first]>val+graph[now][i].second){
                d[graph[now][i].first]=val+graph[now][i].second;
                pq.push({-(val+graph[now][i].second),graph[now][i].first});
                
            }
        }
        
    }
    
    
    
    
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,e;
    cin>>n>>e;
    fill(d, d+801, INF);
    for(int i=0;i<e;i++){
        
        int a,b,c;
        
        //a에서 b로가는 비용 c
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
        
        
    }
    int v1,v2;
    cin>>v1>>v2;
    
    int res=INF;
    int FirstToA;
    int FirstToB;
    int AtoB;
    int BtoA;
    int BtoN;
    int AtoN;
    dijkstra(1);
    FirstToA=d[v1];
    FirstToB=d[v2];
    fill(d, d+801, INF);
    dijkstra(v1);
    AtoB=d[v2];
    AtoN=d[n];
    fill(d, d+801, INF);
    dijkstra(v2);
    BtoA=d[v1];
    BtoN=d[n];

    res=min(FirstToA+AtoB+BtoN,FirstToB+BtoA+AtoN);
    if(res<0||res>=INF){
        cout<<-1<<"\n";
    }
    else{
        cout<<res<<"\n";
    }
    
    return 0;
}
