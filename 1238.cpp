//
//  1238.cpp
//  algo
//
//  Created by 박효정 on 2021/06/15.
//

#include <iostream>
#include <algorithm>
#include <queue>
#define INF 987654321
using namespace std;

vector<pair<int, int>> graph[1001];
int d[1001];
void dijkstra(int s){
    priority_queue<pair<int, int>>pq;
    pq.push({0,s});
    d[s]=0;
    while(!pq.empty()){
        int now=pq.top().second;
        int val=-pq.top().first;
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
    
    
    int n,m,k;
    cin>>n>>m>>k;
  
    
    
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        //a애서 b로가는 비용 c
        graph[a].push_back({b,c});
        
        
    }
    int res=-INF;
  
    fill(d, d+1001, INF);
    for(int i=1;i<=n;i++){
        dijkstra(i);
        int tmp1=d[k];
        fill(d, d+1001, INF);
        dijkstra(k);
        int tmp2=d[i];
        fill(d, d+1001, INF);
        if(tmp1+tmp2>=INF||tmp1+tmp2<0){
            continue;
        }
        res=max(tmp1+tmp2,res);
        
        
    }
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
