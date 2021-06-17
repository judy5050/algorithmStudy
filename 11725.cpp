//
//  11725.cpp
//  algo
//
//  Created by 박효정 on 2021/06/17.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    vector<int>t[n+1];
   
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        
        //양방향 관계
        t[a].push_back(b);
        t[b].push_back(a);
        
        
    }
    
    vector<int>res(n+1);
    vector<int>vis(n+1);
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int now=q.front();
        vis[now]=1;
        q.pop();
        for(int i=0;i<t[now].size();i++){
            if(vis[t[now][i]]==0){
                q.push(t[now][i]);
                res[t[now][i]]=now;
                vis[t[now][i]]=1;
            }
            
            
        }
        
    }
    
    for(int i=2;i<=n;i++){
        cout<<res[i]<<"\n";
    }
    
    
    
    
    return 0;
}
