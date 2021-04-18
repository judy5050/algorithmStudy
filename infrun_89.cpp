//
//  infrun_89.cpp
//  algo
//
//  Created by 박효정 on 2021/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace  std;

int m,n,tom[1010][1010],res=-2147000000,dis[1010][1010];
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};

struct loc{
    int x,y;
    loc(int a,int b){
        x=a;
        y=b;
    }
};

queue<loc> q;

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>tom[i][j];
            if(tom[i][j]==1){
                q.push(loc(i,j));
            }
        }
    }
    
    while(!q.empty()){
        
        loc tmp=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int xx=tmp.x+dx[i];
            int yy=tmp.y+dy[i];
            if(tom[xx][yy]==0){
                if(xx>=1&&xx<=n&&yy>=1&&yy<=m){
                    q.push(loc(xx,yy));
                    tom[xx][yy]=1;
                    dis[xx][yy]=dis[tmp.x][tmp.y]+1;
                }
            }
        }
    }
    
    int f=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(tom[i][j]==0) f=0;
        }
    }
    
    if(f==1){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(res<dis[i][j]) res=dis[i][j];
            }
        }
        cout<<res<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    
    
    return 0;
}
