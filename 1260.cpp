//
//  1260.cpp
//  algo
//
//  Created by 박효정 on 2021/03/08.
//

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;


int mat[1001][1001];
int n,m,v;
int vis[1001];

void dfs(int v){
    cout<<v<<' ';
    vis[v]=1;
    for(int i=1;i<=n;i++){
        if(vis[i]==1||mat[v][i]==0){
            continue;
        }
        dfs(i);
    }
    
    
    
}

void bfs(int v){
    
    queue<int>q;
    q.push(v);
    vis[v]=1;
    while(!q.empty()){
        v=q.front();
        cout<<q.front()<<' ';
        q.pop();
        for(int i=1;i<=n;i++){
            if(vis[i]==1||mat[v][i]==0){
                continue;
            }
            q.push(i);
            vis[i]=1;
        }
        
        
        
        
    }
    
    
    
    
}
int main()
{
    int x,y;
    cin>>n>>m>>v;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        mat[x][y]=mat[y][x]=1;
    }
    
    dfs(v);
    cout<<"\n";
    memset(vis,0, sizeof(vis));
    
    bfs(v);
    cout<<"\n";
    
    
    
    
    return 0;
}

