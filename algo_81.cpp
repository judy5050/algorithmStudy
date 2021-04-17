//
//  algo_81.cpp
//  algo
//
//  Created by 박효정 on 2021/04/16.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int ch[101];
int start,endpoint;
vector<pair<int, int>> v[101];
int res=2147000000;
int sum;
void dfs(int node){
  
    if(node==endpoint)
    {
        if(res>sum){
           
            res=sum;
        }
       
    }
    else{
        for(int i=0;i<v[node].size();i++){
            if(ch[node]!=1){
                ch[node]=1;
                sum+=v[node][i].second;
                dfs(v[node][i].first);
                sum-=v[node][i].second;
                ch[node]=0;
            }
        }
      
        
        
    }
    
    
}

int main(){
    
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
//    memset(dis, 2147000000, sizeof(dis));
    int n,m;
    int a,b,c;
    cin>>n>>m;
    priority_queue<int>pq;
   
    for(int i=1;i<=m;i++){
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }
   
    
    
    cin>>start>>endpoint;
  
    dfs(start);
    
    
    cout<<res<<"\n";
    
    return 0;
}
