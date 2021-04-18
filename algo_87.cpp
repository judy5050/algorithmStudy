//
//  algo_87.cpp
//  algo
//
//  Created by 박효정 on 2021/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>



using namespace std;

int n,cnt;
int map[21][21];
int ch[21][21];
int dx[8]={-1,0,1,0,-1,-1,1,1};
int dy[8]={0,1,0,-1,-1,1,1,-1};
queue<pair<int, int>>q;
void bfs(int x,int y){
 
    ch[x][y]=1;
    while(!q.empty()){
        int xx,yy;
        xx=q.front().first;
        yy=q.front().second;
        int nx,ny;
        q.pop();
        for(int i=0;i<8;i++){
            nx=xx+dx[i];
            ny=yy+dy[i];
           
            if(nx>=0&&ny>=0&&nx<n&&ny<n){
                if(ch[nx][ny]==0&&map[nx][ny]==1){
                    q.push({nx,ny});
                    ch[nx][ny]=1;
                }
            }
            
            
        }

        
    }
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
    
    //섬 갯수
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j]==1&&ch[i][j]==0){
                q.push({i,j});
                bfs(i,j);
                cnt++;
            }
        }
    }
    
    cout<<cnt<<"\n";
    
    return 0;
}
