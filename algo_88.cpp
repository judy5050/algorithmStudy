//
//  algo_88.cpp
//  algo
//
//  Created by 박효정 on 2021/04/18.
//
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
queue<pair<int, int>>q;
int map[10][10];
int res=2147000000;
int ch[10][10];
int dx[4]={0,1,-1,0};
int dy[4]={-1,0,0,1};
int cnt;
void bfs(int a,int b){
    
    while(!q.empty()){
        
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=xx+dx[i];
            int ny=yy+dy[i];
           
            if(nx>0&&ny>0&&nx<8&&ny<8){
                if(ch[nx][ny]==0&&map[nx][ny]==0){
                    if(nx==7&&ny==7){
                        map[nx][ny]=map[xx][yy]+1;
                        res=cnt;
                       
                        return ;
                    }
                    else{
                        ch[nx][ny]=1;
                        map[nx][ny]=map[xx][yy]+1;
                        q.push({nx,ny});
                    }
                }
            }
            
            
        }
    
    }
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    //입력
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            cin>>map[i][j];
        }
    }
  
    //시작점은 도착함
    ch[1][1]=1;
    q.push({1,1});
    bfs(1,1);
    
    cout<<map[7][7]<<"\n";
    return 0;
}
