//
//  2606.cpp
//  algo
//
//  Created by 박효정 on 2021/03/14.
//


//bfs
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int n; //컴퓨터의 총 개수
int m; //연결된 줄의 수
vector<int> v[101];
queue<int> q;
bool vis[101];
int res;
void bfs(){
    
   
    
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            if(vis[v[x][i]]==false){
                vis[v[x][i]]=true;
                res++;
                q.push(v[x][i]);
         
            }
            
            
            
            
        }
    
        
        
    }
        
    
    
    
}



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>m;
    
    memset(vis, false,sizeof(vis));
    
    for(int i=0;i<m;i++){
        int a,b;
        
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    vis[1]=true;
    q.push(1);
    bfs();
    
    cout<<res<<"\n";
    
    
    
    
    
    
    
    
    
    
    
    
}
