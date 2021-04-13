//
//  infrun_67.cpp
//  algo
//
//  Created by 박효정 on 2021/04/14.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int map[30][30],ch[30],n,cost=2147000000;


void dfs(int v,int sum){
    int i;
    if(v==n){
        if(sum<cost) cost=sum;
    }else{
        for(i=1;i<=n;i++){
            if(map[v][i]>0&&ch[i]==0){
                ch[i]=1;
                dfs(i,sum+map[v][i]);
                ch[i]=0;
            }
        }
    }
}



int main(){

    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int m,i,a,b,c;
    
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>a>>b>>c;
        map[a][b]=c;
        
    }
    
    ch[1]=1;
    dfs(1,0);
    
    cout<<cost<<"\n";
    
    
    return 0;
}
