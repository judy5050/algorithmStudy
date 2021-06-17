//
//  1389.cpp
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
    
    //번호 케빈 베이컨 수
    vector<int>res;
    int low=987654321;
    int n,m;
    cin>>n>>m;
    
    vector<int> v[n+1];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    for(int i=1;i<=n;i++){
        int num=0;
        queue<pair<int,int>>q;
        vector<int>vis(n+1);
        q.push({i,0});
        vis[i]=1;
        while(!q.empty()){
            int now=q.front().first;
            int cnt=q.front().second;
            num+=cnt;
            q.pop();
            for(int i=0;i<v[now].size();i++){
                if(vis[v[now][i]]==0){
                    q.push({v[now][i],cnt+1});
                    vis[v[now][i]]=1;
                }
            }
            
            
            
        }
        if(low>num){
            low=num;
            res.clear();
            res.push_back(i);
        }
        else if(low==num){
            res.push_back(i);
        }
        
    }
    
    sort(res.begin(), res.end());
    
    cout<<res[0]<<"\n";
    
    return 0;
}
