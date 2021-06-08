//
//  1976.cpp
//  algo
//
//  Created by 박효정 on 2021/06/07.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int parent[201];


int findParent(int x){
    if(x==parent[x]){
        return x;
    }
    else{
        return parent[x]=findParent(parent[x]);
    }
}

void unionParent(int a,int b){
    a=findParent(a);
    b=findParent(b);
    if(a<b) parent[b]=a;
    else parent[a]=b;
}


int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>> v(n+1,vector<int>(n+1,0));
    vector<int>mov(m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    for(int i=0;i<m;i++){
        cin>>mov[i];
    }
    
    //union
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(v[i][j]==1){
                unionParent(i, j);
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        findParent(i);
    }
    
    int tmp;
    bool ch=true;
        tmp=parent[mov[0]];
        for(int i=1;i<mov.size();i++){
            if(tmp!=parent[mov[i]]){
                ch=false;
                break;
            }
        }
    
   
    if(ch==false){
        cout<<"NO\n";
    }
    if(ch==true){
        cout<<"YES\n";
    }
    
    return 0;
}
