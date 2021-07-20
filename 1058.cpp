//
//  1058.cpp
//  algo
//
//  Created by 박효정 on 2021/07/20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>


using namespace std;

vector<int> v[51];
int res[51];

void bfs(int s){
    int cnt=0;
    int vis[51];
    queue<pair<int,int>>q;
    q.push({s,1});
    fill(vis, vis+51, 0);
    vis[s]=1;
    while(!q.empty()){
        int now=q.front().first;
        int def=q.front().second;
        q.pop();
        vis[now]=1;
        for(int i=0;i<v[now].size();i++){
            if(vis[v[now][i]]==0){
                if(def<2){
                    q.push({v[now][i],def+1});
                    vis[v[now][i]]=1;
                }
                if(v[now][i]!=s&&def<=2){
                    cnt++;
                    vis[v[now][i]]=1;
                }
               
            }
        }
        
        
        
        
        
        
    }
    
    res[s]=cnt;
    
    
}

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='Y'){
                v[i].push_back(j);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        bfs(i);
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,res[i]);
    }

    cout<<ans<<"\n";
    
    
    return 0;
}
