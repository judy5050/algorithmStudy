//
//  11734.cpp
//  algo
//
//  Created by 박효정 on 2021/03/08.
//


#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;
void dfs(int start);
vector<int>connected[1001];//간선을 연결해주기 위해
bool vis[1001];
int n,m;
int cnt;

void dfs(int start){
    vis[start]=true;
    for(int i=0;i<connected[start].size();i++){
        
        int next=connected[start][i];
        if(!vis[next]){
            dfs(next);
        }
        
        
        
        
    }
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    for(int i=0;i<m;i++){
        
        int u,v;
        cin>>u>>v;
        
        //양 방향 연결
        connected[u].push_back(v);
        connected[v].push_back(u);
        
        
        
        
    }
    
    memset(vis, false, sizeof(vis));
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
        }
    }
    
    cout<<cnt<<"\n";
    
    return 0;
   
}

