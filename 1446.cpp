//
//  1446.cpp
//  algo
//
//  Created by 박효정 on 2021/06/01.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 2147000000

using namespace std;

int n,d;
int dis[10001];
vector<pair<int, int>> graph[10001];
priority_queue<pair<int, int>>pq;

void dijkstar(int start){
    pq.push({0,start});
    dis[start]=0;
    
    while(!pq.empty()){
        int dist=-pq.top().first;
        int now=pq.top().second;
        pq.pop();
        if(dist>dis[now])continue;
        
        for(int i=0;i<graph[now].size();i++){
            if(dis[graph[now][i].first]>dist+graph[now][i].second){
                dis[graph[now][i].first]=dist+graph[now][i].second;
                pq.push({-(dist+graph[now][i].second),graph[now][i].first});
            }
            
            
        }
        
        
        
        
        
        
        
    }
    
    
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>d;
    
    for(int i=0;i<n;i++){
        int a,b,c;
    
        cin>>a>>b>>c;
        //a에서 b로 가는 비용 c
        graph[a].push_back({b,c});
    }
    
    fill(dis, dis+10001, INF);
    for(int i=0;i<=d;i++){
        graph[i].push_back({i+1,1});
        pq.push({-1,i+1});
    }
    
    dijkstar(0);
    int res=INF;
   
    for(int i=1;i<=d;i++){
        
        if(dis[i]!=INF){
            res=min(res,(d-i)+dis[i]);
        }
       
    }
    
        cout<<dis[d]<<"\n";
   
   
    
    
    return 0;
}
