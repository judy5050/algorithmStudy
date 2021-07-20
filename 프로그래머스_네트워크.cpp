//
//  프로그래머스_네트워크.cpp
//  algo
//
//  Created by 박효정 on 2021/07/18.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int vis[200];
vector<int>v[200];
int res=0;

void bfs(int s){
    
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        int now=q.front();
        q.pop();
        for(int i=0;i<v[now].size();i++){
            if(vis[v[now][i]]==0){
                vis[v[now][i]]=1;
                q.push(v[now][i]);
            }
        }
        
    }
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n=3;
    vector<vector<int>> computers={
        {1,1,0},
        {1,1,1},
        {0,1,1}
    };
//    [[1, 1, 0], [1, 1, 1], [0, 1, 1]]
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            if(computers[i][j]==1){
                v[i].push_back(j);
            }
         
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            
            if(vis[v[i][j]]==0){
                bfs(v[i][j]);
                res++;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            res++;
        }
    }
    
    
    cout<<res<<"\n";
    
    
    
    
    return 0;
}
