//
//  1939.cpp
//  algo
//
//  Created by 박효정 on 2021/07/21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define  MAX 10001

using namespace std;
int d[MAX];
vector<pair<int, int>>graph[MAX];
void dijkstra(int start){
    priority_queue<pair<int, int>>pq;
    pq.push({1000000001,start});
    d[start]=1000000001;
    while (!pq.empty()) {
        int now=pq.top().second;
        int val=pq.top().first;
        pq.pop();
        if(d[now]>val)continue;
        for(int i=0;i<graph[now].size();i++){
            int cost = min(val , graph[now][i].second);
                      // 현재 노드를 거쳐서, 다른 노드로 이동하는 거리가 더 짧은 경우
                      if (cost > d[graph[now][i].first]) {
                          d[graph[now][i].first] = cost;
                          pq.push(make_pair(cost, graph[now][i].first));
                      }
        }
        
        
        
    }
    
}





int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m;
    cin>>n>>m;
    int a,b,c;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
        
        
    }
    fill(d, d+MAX,-1);
   
    int s,e;
    cin>>s>>e;
    dijkstra(s);
    cout<<d[e]<<"\n";
    
    
    
    
    
    
    
    return 0;
}
