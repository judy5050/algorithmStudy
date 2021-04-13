//
//  infrun_70.cpp
//  algo
//
//  Created by 박효정 on 2021/04/14.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int ch[30],dis[30];

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m,a,b,x;
    vector<int> map[30];
    queue<int> q;
    
    cin>>n>>m;
    
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        map[a].push_back(b);
    }
    
    q.push(1);
    ch[1]=1;
    while(!q.empty()){
        x=q.front();
        q.pop();
        for(int i=0;i<map[x].size();i++){
            if(ch[map[x][i]]==0){
                ch[map[x][i]]=1;
                q.push(map[x][i]);
                dis[map[x][i]]=dis[x]+1;
            }
            
            
            
            
        }
        
        
        
    }
    
    for(int i=2;i<=n;i++){
        cout<<i<<" "<<":"<<" "<<dis[i]<<"\n";
    }
    
    return 0;
}
