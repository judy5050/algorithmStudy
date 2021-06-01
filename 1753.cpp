//
//  1753.cpp
//  algo
//
//  Created by 박효정 on 2021/06/02.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define INF 2147000000
using namespace std;

int v,e;
int k;
vector<pair<int, int>> graph[20001];
int d[20001];
priority_queue<pair<int, int>>pq;

void dijkstar(int start){
    
    pq.push({0,start});
    d[start]=0;
    while(!pq.empty()){
        
        int dist=-pq.top().first;
        int now=pq.top().second;
        pq.pop();
        if(d[now]<dist) continue;
        for(int i=0;i<graph[now].size();i++){
            int cost=dist+graph[now][i].second;
            if(d[graph[now][i].first]>cost){
                d[graph[now][i].first]=cost;
                pq.push({-cost,graph[now][i].first});
            }
        }
        
        
    }
    
    
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>v>>e>>k;
    
    for(int i=0;i<e;i++){
        int a,b,c;
        cin>>a>>b>>c;
        //a에서 b로 가는 가중치 c
        graph[a].push_back({b,c});
    }
    fill(d, d+20001, INF);
    dijkstar(k);
    for(int i=1;i<=v;i++){
        if(d[i]==INF){
            cout<<"INF"<<"\n";
        }else{
            cout<<d[i]<<"\n";
        }
        
    }
    
    
    return 0;
}
