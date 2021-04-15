//
//  algo_78.cpp
//  algo
//
//  Created by 박효정 on 2021/04/16.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int unf[10001];

struct edge{
    int v1;
    int v2;
    int val;
    edge(int a,int b,int c){
        v1=a;
        v2=b;
        val=c;
    }
    bool operator<(const edge &b) const{
        return val<b.val;
    }
};

int find(int v){
    if(v==unf[v]) return v;
    else return unf[v]=find(unf[v]);
}

void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b) unf[a]=b;
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    vector<edge> ed;
    int i,n,m,a,b,c,cnt=0,res=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        unf[i]=i;
    }
    for(i=1;i<=m;i++){
        
        cin>>a>>b>>c;
        ed.push_back(edge(a,b,c));
        
    }
    sort(ed.begin(), ed.end());
    for(i=0;i<=m;i++){
        int fa=find(ed[i].v1);
        int fb=find(ed[i].v2);
        if(fa!=fb){
            res+=ed[i].val;
            Union(ed[i].v1,ed[i].v2);
        }
    }
    cout<<res<<"\n";
    return 0;
}
