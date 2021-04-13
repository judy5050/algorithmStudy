//
//  algo+64.cpp
//  algo
//
//  Created by 박효정 on 2021/04/13.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int map[30][30];
int ch[30];
int n;
int cnt;

void dfs(int v){
    int i;
    if(v==n){
        cnt++;
    }else{
        for(i=1;i<=n;i++){
            if(map[v][i]==1&&ch[i]==0){
                ch[i]=1;
                dfs(i);
                ch[i]=0;
            }
        }
        
        
        
    }
}



int main(){
    
    int m,i,a,b;
    cin>>n>>m;
    
    for(i=1;i<=m;i++){
        cin>>a>>b;
        map[a][b]=1;
    }
    
    ch[1]=1;
    dfs(1);
    cout<<cnt<<"\n";
    
    
    
    return 0;
}
