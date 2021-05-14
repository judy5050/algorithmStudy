//
//  1697_dfs.cpp
//  algo
//
//  Created by 박효정 on 2021/05/14.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n,k;
int cur;
int cnt;
int ch[300002];
queue<pair<int,int>>q;
void bfs(int l,int c){
      
    q.push({l,c});
    while(!q.empty()){
        cur=q.front().first;
        cnt=q.front().second;
        q.pop();
        if(cur==k){
            cout<<cnt<<"\n";
            break;
        }
        if(ch[cur+1]==0){
            ch[cur+1]=1;
            q.push({cur+1,cnt+1});
        }
        if(cur-1>=0){
            if(ch[cur-1]==0){
                ch[cur-1]=1;
                q.push({cur-1,cnt+1});
            }
        }
        if(cur*2<300002){
            if(ch[cur*2]==0){
                ch[cur*2]=1;
                q.push({cur*2,cnt+1});
            }
        }
       
        
        
    }
    
    
}


int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n>>k;
    
    bfs(n,0);
    
    
    
    
    
    
    return 0;
}
