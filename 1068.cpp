//
//  1068.cpp
//  algo
//
//  Created by 박효정 on 2021/10/17.
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
    vector<int>v[n];
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        if(input==-1){
            continue;
        }
        v[input].push_back(i);
    }
    
    int d;
    cin>>d;
    vector<int>vis(n);
    //노드 지우기
    queue<int>q;
    q.push(d);
    vis[d]=1;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
//            if(vis[v[x][i]]==0){
                q.push(v[x][i]);
                vis[v[x][i]]=1;
//            }
        }

        
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            if(vis[v[i][j]]==1){
                v[i].erase(v[i].begin());
            }
        }
    }
    
    
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i].size()==0&&vis[i]==0){
            cnt++;
        }
    }
    
    
    cout<<cnt<<"\n";
    
    
    
    return 0;
}
