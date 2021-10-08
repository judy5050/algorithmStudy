//
//  1189.cpp
//  algo
//
//  Created by 박효정 on 2021/10/08.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

char arr[5][5];
int r,c,k;
int res;
int vis[5][5];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
void dfs(int x,int y,int def){
    
    if(x>=r||y>=c||x<0||y<0||(x==0&&y==c-1)){
        
        if(x==0&&y==c-1){
            if(def==k){
                res++;
            }
        }
        
        return;
    }
    
    if(vis[x][y]==0&&arr[x][y]=='.'){
        vis[x][y]=1;
        dfs(x+1,y,def+1);
        dfs(x,y+1,def+1);
        dfs(x-1,y,def+1);
        dfs(x,y-1,def+1);
        vis[x][y]=0;
        
    }
   
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>r>>c>>k;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
   

    
    dfs(r-1,0,1);
    
    cout<<res<<"\n";
    
    
    
    
    
    return 0;
}
