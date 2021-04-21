//
//  algo_104.cpp
//  algo
//
//  Created by 박효정 on 2021/04/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n,m,a,b;
    cin>>n>>m;
    vector<vector<int>> graph(n+1,vector<int>(n+1,0));
    vector<int> degree(n+1);
    queue<int> q;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        graph[a][b]=1;
        degree[b]++;
        
    }
    for(int i=1;i<=n;i++){
        if(degree[i]==0) q.push(i);
    }
    
    while(!q.empty()){
        int now=q.front();
        q.pop();
        cout<<now<<" ";
        for(int i=1;i<=n;i++){
            if(graph[now][i]==1){
                degree[i]--;
                if(degree[i]==0) q.push(i);
            }
        }
       
        
    }
    
    
    
    return 0;
}
