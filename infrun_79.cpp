//
//  infrun_79.cpp
//  algo
//
//  Created by 박효정 on 2021/04/16.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>



using namespace std;

int ch[30];

struct edge{
    int e;
    int val;
    edge(int a,int b){
        e=a;
        val=b;
    }
    bool operator <(const edge &b)const{
        
        return val>b.val;
        
    }
};

int main(){
    
    priority_queue<edge> q;
    vector<pair<int,int>>map[30];
    
    int i,n,m,a,b,c,res=0;
    
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>a>>b>>c;
        map[a].push_back(make_pair(b, c));
        map[b].push_back(make_pair(a,c));
    }
    q.push(edge(1,0));
    while(!q.empty()){
        
        edge tmp=q.top();
        q.pop();
        int v=tmp.e;
        int cost=tmp.val;
        if(ch[v]==0){
            res+=cost;
            ch[v]=1;
            for(i=0;i<map[v].size();i++){
                q.push(edge(map[v][i].first,map[v][i].second));
            }
            
        }
        
        
        
        
        
        
    }
    cout<<res<<"\n";
    
    
    
    
    
    
    return 0;
}
