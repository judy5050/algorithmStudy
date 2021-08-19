//
//  1260.cpp
//  algo
//
//  Created by 박효정 on 2021/08/19.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int>arr[1001];
vector<int>vis(1001);
void dfs(int s){
    if(vis[s]==0){
        cout<<s<<' ';
        vis[s]=1;
        for(int i=0;i<arr[s].size();i++){
            if(vis[arr[s][i]]==0){
                dfs(arr[s][i]);
            }
            
        }
     
        
        
        
    }else{
        return;
    }
    
    
    
    
}


void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=1;
    cout<<s<<' ';
    while(!q.empty()){
        int now=q.front();
        q.pop();
        for(int i=0;i<arr[now].size();i++){
            if(vis[arr[now][i]]==0){
                cout<<arr[now][i]<<' ';
                q.push(arr[now][i]);
                vis[arr[now][i]]=1;
            }
          
            
        }
        
        
        
        
        
    }
    
    
    
    
}
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
   
    
    int n,m,v;
    cin>>n>>m>>v;
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    
    
    
    for(int i=1;i<=n;i++){
        sort(arr[i].begin(), arr[i].end());
        
        
    }
    
    fill(vis.begin(),vis.end(), 0);
    dfs(v);
    cout<<"\n";
    fill(vis.begin(),vis.end(), 0);
    bfs(v);
    cout<<"\n";
    
    
    
    
    
    
    return 0;
}
