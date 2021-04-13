//
//  infrun_66.cpp
//  algo
//
//  Created by 박효정 on 2021/04/14.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int ch[30],cnt=0,n;
vector<int> map[30];

void dfs(int v){
    if(v==n){
        cnt++;
    }
    else{
        for(int i=0;i<map[v].size();i++){
            if(ch[map[v][i]]==0){
                ch[map[v][i]]=1;
                dfs(map[v][i]);
                ch[map[v][i]]=0;
            }
        }
    }
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int m,a,b;
    
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        map[a].push_back(b);
        
        
        
    }
    
    ch[1]=1;
    dfs(1);
    cout<<cnt<<"\n";
    
    
    
    
    
    return 0;
}
