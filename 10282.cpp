//
//  10282.cpp
//  algo
//
//  Created by 박효정 on 2021/07/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 10001
using namespace std;

vector<int>dis(MAX);
vector<pair<int, int>>graph[MAX];
void dijkstra(int start){
    priority_queue<pair<int,int>>pq;
    pq.push({0,start});
    dis[start]=0;
    while(!pq.empty()){
        int now=pq.top().second;
        int val=-pq.top().first;
        pq.pop();
        if(dis[now]<val) continue;;
        for(int i=0;i<graph[now].size();i++){
            if(val+graph[now][i].second<dis[graph[now][i].first]){
                dis[graph[now][i].first]=val+graph[now][i].second;
                pq.push({-(val+graph[now][i].second),graph[now][i].first});
            }
            
            
        }
        
        
    }
    
    
    
    
}

void init(){
    
    fill(dis.begin(), dis.end(), 987654321);
    for(int i=0;i<MAX;i++){
        graph[i].clear();
    }
    
}


int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    //test case 수
    int c;
    cin>>c;
        
    while(c--){
        int n,d,c;
        cin>>n>>d>>c;
        init();
        for(int i=0;i<d;i++){
            int a,b,s;
            cin>>a>>b>>s;
            graph[b].push_back({a,s});
            
            
        }
     
      
        dijkstra(c);
        int res=0;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(dis[i]!=987654321){
                res=max(res,dis[i]);
                cnt++;
            }
        }
        
        cout<<cnt<<' '<<res<<"\n";
        
        
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
