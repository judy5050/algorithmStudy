//
//  14496.cpp
//  algo
//
//  Created by 박효정 on 2021/06/01.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 2147000000
using namespace  std;

int a,b,n,m;

vector<pair<int, int>> graph[10001];
int d[1001];

void dijkstar(int start){
    priority_queue<pair<int, int>>pq;
    pq.push({0,start});
    d[start]=0;
    while(!pq.empty()){
        int cost=-pq.top().first;
        int now=pq.top().second;
        pq.pop();
        if(cost>d[now]){
            continue;
        }
        for(int i=0;i<graph[now].size();i++){
            int c=cost+graph[now][i].second;
            if(c<d[graph[now][i].first]){
                d[graph[now][i].first]=c;
                pq.push({-c,graph[now][i].first});
            }
        }
        
        
        
    }
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>a>>b>>n>>m;
    fill(d, d+1001, INF);
    
    for(int i=0;i<m;i++){
        int s,e;
        cin>>s>>e;
        //s에서 e로 변겅하는데 걸리는 횟수
        graph[s].push_back({e,1});
        graph[e].push_back({s,1});
    }
    
    dijkstar(a);
    
    if(d[b]!=INF){
        cout<<d[b]<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
  
    
    
    
    
    return 0;
}
