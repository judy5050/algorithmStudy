//
//  algo_89.cpp
//  algo
//
//  Created by 박효정 on 2021/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int m,n;
int dx[4]={0,1,-1,0};
int dy[4]={-1,0,0,1};
int ch[1001][1001];
int map[1001][1001];
int check;
int res;
queue<pair<int, int>>q;
void bfs(int a,int b){
    while(!q.empty()){
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        int nx,ny;
        for(int i=0;i<4;i++){
            nx=xx+dx[i];
            ny=yy+dy[i];
            if(nx>=0&&ny>=0&&nx<m&&ny<n){
                //방문전
                if(ch[nx][ny]==0&&map[nx][ny]==0){
                    map[nx][ny]=map[xx][yy]+1;
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
    
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>map[i][j];
            if(map[i][j]==1){
                //1의 좌표 값 저장
                q.push({i,j});
            }
        }
    }
    
   
        while(!q.empty())
        {
            bfs(q.front().first,q.front().second);
           
        }
   
    
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(map[i][j]==0){
                check=1;
                
            }
            res=max(res,map[i][j]);
        }
    }
   
        if(check==1){
            cout<<-1<<"\n";
        }
        else if(q.size()==m*n){
        cout<<0<<"\n";
        }
        else{
            cout<<res-1<<"\n";
        }
    
    return 0;
}
